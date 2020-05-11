
package problem1;


public class Problem1 {
  static void replace(){
    String temp;
    temp = "";
    char[] ch=new char[]{'a','b','r','a','c','a','d','e','b','r','a'};
    for(int j=0;j<11;j++)
     {
       if(ch[j]=='a')  
           temp = temp+ "hi";
       else
           temp= temp+ch[j];
       
     }
        System.out.println(temp);
       
 } 

    
    public static void main(String[] args) {
      replace(); 
    }
}

   
    

