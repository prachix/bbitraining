
package com.problem5.service;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class GetConnection {

    public static Connection conn;
    public PreparedStatement ps, ps1, ps2;
    public ResultSet rs, rs1;
    public static Connection getConnection(){
    try
    {
         Class.forName("com.mysql.jdbc.Driver");
     } 
catch(ClassNotFoundException e)
        {
          System.out.println(e);  
        }
      try{
        conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/users","root","root");
      }
catch(SQLException e)      
{
    System.out.println(e);
}
finally{
          try{
              conn.close();
          }
          catch(Exception e)
          {
          System.out.println(e);
          }
      }            
      return null;  
    }
}
    