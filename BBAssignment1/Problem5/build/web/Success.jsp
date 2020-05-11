<%-- 
    Document   : Success
    Created on : May 8, 2020, 1:22:09 AM
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
        <h1>Welcome User <%=request.getParameter("uname") %> </h1>
            <h2>You have been successfully logged in </h2>
    </body>
</html>
