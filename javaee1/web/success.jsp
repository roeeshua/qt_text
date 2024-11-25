<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>登录成功</title>
    <style>
        /* 重置样式 */
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: 'Arial', sans-serif;
            background-color: #f4f4f4;
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            text-align: center;
            color: #333;
        }

        .success-container {
            background-color: #fff;
            width: 100%;
            max-width: 500px;
            padding: 40px;
            border-radius: 8px;
            box-shadow: 0 4px 12px rgba(0, 0, 0, 0.1);
        }

        .success-header h2 {
            font-size: 28px;
            margin-bottom: 20px;
            color: #4CAF50;
        }

        .success-info {
            font-size: 16px;
            margin-bottom: 20px;
        }

        .success-info p {
            margin: 10px 0;
        }

        .logout-button {
            padding: 12px 20px;
            font-size: 16px;
            background-color: #4CAF50;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            text-decoration: none;
        }

        .logout-button:hover {
            background-color: #45a049;
        }
    </style>
</head>
<body>

<div class="success-container">
    <div class="success-header">
        <h2>欢迎, ${user.username} 登录成功!</h2>
    </div>

    <div class="success-info">
        <p>你的注册信息：</p>
        <p>用户名: ${user.username}</p>
    </div>

    <a href="index.jsp" class="logout-button">退出登录</a>
</div>

</body>
</html>
