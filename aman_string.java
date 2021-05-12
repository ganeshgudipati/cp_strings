import java.util.*;
  import java.io.*;
  
  public class Main {
    public static void main(String args[]) throws IOException {
      
      Scanner sc=new Scanner(System.in);
      int t;
      t=sc.nextInt();
      while(t-->0)
      {
        String s=sc.next();
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            int k1=s.indexOf("aman",i);
            if(k1==i)
            {
              count=count+(s.length()-(i+3));
            }
            else if(k1>i)
            {
              if(k1+3<s.length())
              {
                count=count+(s.length()-(k1+3))*(k1-i+1);
              }
              i=k1;
            }
            
        }
        System.out.println(count);
      }
      
    }
  }
