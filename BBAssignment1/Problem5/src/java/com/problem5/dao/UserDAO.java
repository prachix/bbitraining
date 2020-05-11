/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.problem5.dao;

import com.problem5.service.GetConnection;
import java.sql.SQLException;

/**
 *
 * @author Dell
 */

    public class UserDAO {
    public boolean validateuser(String uname,String password) 
    {
      String sql="select * from user where uname=? and password=?";
      GetConnection gc=new GetConnection();
      try{
      gc.ps=GetConnection.getConnection().prepareStatement(sql);
      gc.ps.setString(1,uname);
      gc.ps.setString(1,password);
      gc.rs=gc.ps.executeQuery();
      
      return gc.rs.next();
    }
      catch (SQLException e)
      {
          System.out.println(e);
      }
         return false;
    }
    
}



    

