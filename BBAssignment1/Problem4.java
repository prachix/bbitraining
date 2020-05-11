

package problem4;
 class Problem4 {
     public static void main (String args[]){
         int a,b;
         a=20;
         b=36;
         System.out.println("Before swapping :");
         System.out.println("a = " +a);
         System.out.println("b = " +b);
         a=a+b;
         b=a-b;
         a=a-b;
         System.out.println("After swapping :");
         System.out.println("a = " +a);
         System.out.println("b = " +b);
         
     }
 }