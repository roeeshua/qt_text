import java.util.ArrayList;
import java.util.List;

public class UserDatabase {

    public static boolean register(User user) {
        UserService userService = new UserServiceImpl();
        if (userService.is_exist(user.getUsername())) {
            return false; // 用户名已存在
        }
        userService.add_data(user.getUsername(), user.getPassword());
        return true;
    }

    public static boolean login(String username, String password) {
        UserService userService = new UserServiceImpl();
        if (userService.login(username,password))
            return true;
        else
            return false;
    }

}