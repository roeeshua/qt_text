public interface UserService {
    void add_data(String username, String password);

    boolean is_exist(String username);

    boolean login(String username, String password);
}
