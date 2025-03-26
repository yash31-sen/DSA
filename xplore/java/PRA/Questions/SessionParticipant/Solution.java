package SessionParticipant;

import java.util.*;

public class Solution {
    public static void main(String[] args) throws ParticipantAlreadyRegisered, SessionFullException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Session> sarr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int sid = sc.nextInt();
            sc.nextLine();
            String sname = sc.nextLine();
            int mcap = sc.nextInt();
            Session obj = new Session(sid, sname, mcap);
            sarr.add(obj);
        }
        Service serviceObj = new Service();
        while (true) {
            System.out.println("----------------");
            int pid = sc.nextInt();
            sc.nextLine();
            String pname = sc.nextLine();
            String pemail = sc.nextLine();
            Participant obj = new Participant(pid, pname, pemail);
            int sid = sc.nextInt();
            int n1 = sc.nextInt();
            for (int i = 0; i < sarr.size(); i++) {
                System.out.println("here");
                if (!help(sarr, sid)) {
                    System.out.println("Invlaid Session ID.");
                    break;
                } else {
                    try {
                        // System.out.println("I am sid of class:"+sarr.get(i).sid);
                        // System.out.println("I am sid :"+sid);
                        if (sarr.get(i).sid == sid) {
                            serviceObj.RPFS(obj, sarr.get(i));
                        } else {
                            continue;
                        }
                    } catch (ParticipantAlreadyRegisered e) {
                        System.out.println("Participant " + obj.pname + " is already registered.");
                    } catch (SessionFullException e1) {
                        System.out.println("Session " + sarr.get(i).sname + " is full.");
                    }
                }
            }
            if (n1 == 0) {
                break;
            }
        }
        for (int i = 0; i < sarr.size(); i++) {
            if (sarr.get(i).slist.size() == 0) {
                System.out.println("No participant in " + sarr.get(i).sname);
            } else {
                System.out.println("Participant in " + sarr.get(i).sname);
                for (int j = 0; j < sarr.get(i).slist.size(); j++) {
                    System.out.println(sarr.get(i).slist.get(j).pname
                            + " " + sarr.get(i).slist.get(j).pemail);
                }
            }
        }

    }

    public static boolean help(List<Session> s, int sid) {
        for (int i = 0; i < s.size(); i++) {
            if (s.get(i).sid == sid) {
                // System.out.println(sid+" "+s.get(i).sid);
                return true;
            }
        }
        return false;
    }
}

class Participant {
    public int pid;
    public String pname;
    public String pemail;

    Participant(int pid, String pname, String pemail) {
        this.pid = pid;
        this.pname = pname;
        this.pemail = pemail;
    }
}

class Session {
    public int sid;
    public String sname;
    public int mcap;
    public int ccap;
    public List<Participant> slist = new ArrayList<>();

    Session(int sid, String sname, int mcap) {
        this.sid = sid;
        this.sname = sname;
        this.mcap = mcap;
    }
}

class Service {
    public void RPFS(Participant p, Session s) throws ParticipantAlreadyRegisered, SessionFullException {
        if (s.mcap <= 0) {
            throw new SessionFullException("Session Full try later");
        } else if (s.slist.contains(p) == false) {
            s.slist.add(p);
            System.out.println("addintion done");
            --s.mcap;
            System.out.print("s.mcap ");
            System.out.println(s.mcap);
        } else {
            throw new ParticipantAlreadyRegisered("Participant already Resgistered");
        }
    }

    public List<Participant> DAPIS(Session s) {// sarr.get(i).slist.get(i)
        if (s.slist.size() != 0) {
            return s.slist;
        } else {
            return null;
        }
    }
}

class ParticipantAlreadyRegisered extends Exception {
    public ParticipantAlreadyRegisered(String msg) {
        super(msg);
    }
}

class SessionFullException extends Exception {
    public SessionFullException(String msg) {
        super(msg);
    }
}