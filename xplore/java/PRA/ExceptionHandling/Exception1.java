package ExceptionHandling;
class MyException extends Exception {
    public MyException(String message) {
        super(message);
    }
}
public class Exception1 {
    public static void main(String[] args) {
        int n = 101;
        try {
            if (n > 100) {
                throw new MyException("This is a custom exception");
            }
        } catch (MyException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("done");
        }
    }

    static int add() throws ArithmeticException {
        int ans = 1 / 0;
        return ans;
    }
}

