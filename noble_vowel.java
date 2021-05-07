import java.util.*;
  import java.io.*;
  
  public class Main {
    public static void main(String args[]) throws IOException {
      
      Scanner sc=new Scanner(System.in);
      int t,n;
      t=sc.nextInt();
      while(t-->0)
      {
        String s=sc.next();
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
          if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' ||s.charAt(i)=='u' ||s.charAt(i)=='n')
          {
            ; 
          }
          else if((i+1<s.length())&&(s.charAt(i+1)=='a' || s.charAt(i+1)=='e' || s.charAt(i+1)=='i' || s.charAt(i+1)=='o' ||s.charAt(i+1)=='u'))
          {  
            ;
          }
          else
          {
            flag=1;
            break;
          }
        }
        if(flag==1)
          System.out.println("NO");
        else
          System.out.println("YES");
      }
      
    }
  }
