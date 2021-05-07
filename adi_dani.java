import java.util.*;
  import java.io.*;
  
  public class Main {
    public static void main(String args[]) throws IOException {
      
      Scanner sc=new Scanner(System.in);
      int t,n;
      t=sc.nextInt();
      while(t-->0)
      {
        n=sc.nextInt();
        String s=sc.next();
        int count=0;
        for(int i=0;i<n;i++)
        {
          if(s.charAt(i)=='A')
            count++;
          else
            count--;
        }
        if(count>0)
          System.out.println("Aditya");
        else if(count==0)
          System.out.println("AdiDan");
        else
          System.out.println("Danish");
      }
    }
  }
