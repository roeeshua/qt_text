import java.sql.*;

public class UserDaoImpl implements UserDao {

    @Override
    public void add_data(String username, String password){
        Connection conn = null;
        PreparedStatement preparedStatement =null;
        try{
            conn = JDBCTools.getConnection();  //连接
            String statement = "insert into usertable values(?,?)";  //编写预编译语句
            preparedStatement = conn.prepareStatement(statement);  //获取语句
            //插入对应问号的值
            preparedStatement.setString(1,username);
            preparedStatement.setString(2,password);
            //执行mysql语句
            preparedStatement.execute();
        }catch (Exception e){
            e.printStackTrace();
        }
        finally {
            JDBCTools.release(preparedStatement,conn);
        }
    }

    @Override
    public boolean is_exist(String username){
        Connection conn=null;
        PreparedStatement preparedStatement=null;
        ResultSet res=null;
        try {
            conn = JDBCTools.getConnection();  //连接
            String statement = "select * from usertable where username = ?";  //编写预编译语句
            preparedStatement = conn.prepareStatement(statement);  //获取语句
            //插入对应问号的值
            preparedStatement.setString(1, username);
            res = preparedStatement.executeQuery();
            if (res.isBeforeFirst()) {
                return true;
            } else {
                return false;
            }
        }catch (Exception e){
            e.printStackTrace();
        }finally {
            JDBCTools.release(res,preparedStatement,conn);
        }
        return false;
    }

    @Override
    public boolean login(String username, String password) {
        Connection conn=null;
        PreparedStatement preparedStatement=null;
        ResultSet res=null;
        try {
            conn = JDBCTools.getConnection();  //连接
            String statement = "select * from usertable where username = ? and password = ?";  //编写预编译语句
            preparedStatement = conn.prepareStatement(statement);  //获取语句
            //插入对应问号的值
            preparedStatement.setString(1, username);
            preparedStatement.setString(2, password);
            res = preparedStatement.executeQuery();
            if (res.isBeforeFirst()) {
                return true;
            } else {
                return false;
            }
        }catch (Exception e){
            e.printStackTrace();
        }finally {
            JDBCTools.release(res,preparedStatement,conn);
        }
        return false;
    }

}

