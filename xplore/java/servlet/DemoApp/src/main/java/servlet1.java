
public class servlet1 extends HttpServlet {
public void service(HttpServletRequest req, HttpServletResponse res) {
	int i=Integer.parseInt(req.getParameter("num1"));
	int j=Integer.parseInt(req.getParameter("num2"));
	System.out.println(i+j);
}
}
