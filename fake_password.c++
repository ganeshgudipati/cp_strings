#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
    int t;
    string s1,s2,s3;
    char c1,c2;
    cin>>t;
    while(t--)
    {
      cin>>s1>>s2;
      s3=s2;
      
      c1=s2[0];
      c2=s2[1];
      int n=s2.length();
      for(int i=0;i<n-2;i++)
        s2[i]=s2[i+2];
      s2[n-2]=c1;
      s2[n-1]=c2;
      
      c1=s3[n-1];
      c2=s3[n-2];
      for(int i=n-1;i>=2;i--)
        s3[i]=s3[i-2];
      s3[1]=c1;
      s3[0]=c2;
      
      if(s1==s2 || s1==s3)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
    }
    return 0;
  }
