public class UserServiceImpl implements UserService{
    UserDao userDao = new UserDaoImpl();
    @Override
    public void add_data(String username, String password) {
        userDao.add_data(username,password);
    }

    @Override
    public boolean is_exist(String username) {
        return userDao.is_exist(username);
    }

    @Override
    public boolean login(String username, String password) {
        return userDao.login(username,password);
    }
}
