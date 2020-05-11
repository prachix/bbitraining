<%-- 
    Document   : LoginForm.jsp
    Created on : May 8, 2020, 5:50:23 PM
    Author     : Dell
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form action="/Validateuser" method="post" >
            <table border="5">
                <tr>
                    <td>Enter user name</td>
                    <td><input type="text" name="uname"></input> </td>
                </tr>
                <tr>
                    <td>Enter password</td>
                    <td> <input type ="password" name="password"></input></td>
                </tr>
                <tr>
                    <td><input type="submit"></input></td>
                    <td><input type="reset"></input></td>
                </tr>
                
            </table>        
        </form>
    </body>
</html>
