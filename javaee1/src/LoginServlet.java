import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.*;
import java.io.IOException;

@WebServlet("/login")
public class LoginServlet extends HttpServlet {
        protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String username = request.getParameter("username");
        String password = request.getParameter("password");
        UserService userService = new UserServiceImpl();
        if (UserDatabase.login(username, password))
        {
                User user = new User(username,password);
                request.setAttribute("user", user);
                request.getRequestDispatcher("success.jsp").forward(request, response);

        } else {
            if (!userService.is_exist(username)) {
                request.setAttribute("error", "用户名不存在");
            } else {
                request.setAttribute("error", "密码错误");
            }
            request.getRequestDispatcher("index.jsp").forward(request, response);
        }
    }
}