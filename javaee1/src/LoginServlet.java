import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.*;
import java.io.IOException;

@WebServlet("/login")
public class LoginServlet extends HttpServlet {
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String username = request.getParameter("username");
        String password = request.getParameter("password");

        User user = UserDatabase.login(username, password);
        if (user != null) {
            request.setAttribute("user", user);
            request.getRequestDispatcher("success.jsp").forward(request, response);
        } else {
            if (!UserDatabase.userExists(username)) {
                request.setAttribute("error", "用户名不存在");
            } else {
                request.setAttribute("error", "密码错误");
            }
            request.getRequestDispatcher("index.jsp").forward(request, response);
        }
    }
}