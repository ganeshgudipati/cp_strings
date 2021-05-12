import java.util.*;
  import java.io.*;
  
  public class Main {
    public static void main(String args[]) throws IOException {
      
      Scanner sc= new Scanner(System.in);
      int t,n;
      t=sc.nextInt();
      while(t-->0)
      {
        n=sc.nextInt();
        String s[]=new String[n];
        String s1="";
        for(int i=0;i<n;i++)
        {
          s[i]=sc.next();
        }
        int sum=0,m=1000000;
        for(int i=0;i<n;i++)
        {
          int k=-1;
          sum=0;
          for(int j=0;j<n;j++)
          {
            s1=s[j];
            s1=s1+s1;
            k=s1.indexOf(s[i]);
            sum=sum+k;
            if(k==-1)
            {
              sum=-1;
              break;
            }
          }
          if(sum==-1)
          {
            m=-1;
          }
          if(sum<m)
          {
            m=sum;
          }
        }
        if(sum==-1)
        {
          System.out.println(-1);
        }
        else
          System.out.println(m);
      }
    }
  }
