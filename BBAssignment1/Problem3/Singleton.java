
package singleton;
class One{
    public static One obj;
    private One()
    {
        //hinder other classes to create an object of this class
        System.out.println("Object created");
    }
   
    public static One getInstance()
    {
        if(obj==null)
        {
           obj = new One(); 
        }
    return obj;
    }
  }



public class Singleton {

    public static void main(String[] args) 
    {
       One obj1= One.getInstance();
    }
    
}
