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
        int count1=0,count2=0;
        for(int i=0;i<s.length();i++)
        {
          if(s.charAt(i)=='A' || s.charAt(i)=='E' || s.charAt(i)=='I' || s.charAt(i)=='O' ||s.charAt(i)=='U')
            count1++;
          else
            count2++;
        }
        System.out.println(count1+" "+count2);
      }
    }
  }
