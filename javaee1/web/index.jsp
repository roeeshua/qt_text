<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<!DOCTYPE html>
<html lang="zh">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>登录</title>
  <style>
    /* 重置样式 */
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
    }

    body {
      font-family: 'Arial', sans-serif;
      background-color: #eaeaea;
      display: flex;
      justify-content: center;
      align-items: center;
      min-height: 100vh;
    }

    .login-container {
      background-color: #fff;
      width: 100%;
      max-width: 400px;
      border-radius: 8px;
      box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
      overflow: hidden;
      padding: 20px;
    }

    .login-header {
      text-align: center;
      margin-bottom: 30px;
    }

    .login-header h2 {
      font-size: 28px;
      color: #333;
    }

    .form-group {
      margin-bottom: 20px;
    }

    label {
      display: block;
      font-size: 14px;
      color: #555;
      margin-bottom: 5px;
    }

    input[type="text"],
    input[type="password"] {
      width: 100%;
      padding: 12px;
      font-size: 16px;
      border: 1px solid #ddd;
      border-radius: 5px;
      transition: border-color 0.3s;
    }

    input[type="text"]:focus,
    input[type="password"]:focus {
      border-color: #4CAF50;
      outline: none;
    }

    input[type="submit"] {
      width: 100%;
      padding: 14px;
      background-color: #4CAF50;
      color: white;
      border: none;
      border-radius: 5px;
      font-size: 16px;
      cursor: pointer;
      transition: background-color 0.3s;
    }

    input[type="submit"]:hover {
      background-color: #45a049;
    }

    .error {
      color: red;
      font-size: 14px;
      margin-top: 10px;
      text-align: center;
    }

    .register-link {
      text-align: center;
      margin-top: 20px;
    }

    .register-link a {
      font-size: 14px;
      color: #007bff;
      text-decoration: none;
    }

    .register-link a:hover {
      text-decoration: underline;
    }
  </style>
</head>
<body>

<div class="login-container">
  <div class="login-header">
    <h2>欢迎登录</h2>
  </div>

  <form action="login" method="post">
    <div class="form-group">
      <label for="username">用户名:</label>
      <input type="text" id="username" name="username" required placeholder="请输入用户名">
    </div>

    <div class="form-group">
      <label for="password">密码:</label>
      <input type="password" id="password" name="password" required placeholder="请输入密码">
    </div>

    <input type="submit" value="登录">
  </form>

  <div class="register-link">
    <p>还没有账号？<a href="register.jsp">点击这里注册</a></p>
  </div>

  <c:if test="${not empty error}">
    <div class="error">
      <p>${error}</p>
    </div>
  </c:if>
</div>

</body>
</html>
