import java.util.ArrayList;
import java.util.List;

public class UserDatabase {
    private static List<User> users = new ArrayList<>();

    public static boolean register(User user) {
        for (User u : users) {
            if (u.getUsername().equals(user.getUsername())) {
                return false; // 用户名已存在
            }
        }
        users.add(user);
        return true;
    }

    public static User login(String username, String password) {
        for (User u : users) {
            if (u.getUsername().equals(username)) {
                return u.getPassword().equals(password) ? u : null;
            }
        }
        return null;
    }

    public static boolean userExists(String username) {
        for (User u : users) {
            if (u.getUsername().equals(username)) {
                return true;
            }
        }
        return false;
    }
}