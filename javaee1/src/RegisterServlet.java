import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.*;
import java.io.IOException;

@WebServlet("/register")
public class RegisterServlet extends HttpServlet {
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        String username = request.getParameter("username");
        String password = request.getParameter("password");

        if (UserDatabase.register(new User(username, password))) {
            response.sendRedirect("index.jsp");
        } else {
            request.setAttribute("error", "用户名已存在，请选择其他用户名");
            request.getRequestDispatcher("register.jsp").forward(request, response);
        }
    }
}