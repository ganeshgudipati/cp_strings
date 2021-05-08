#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--)
    {
      string s1,s2[5];
      cin>>s1;
      int flag=0;
      for(int i=0;i<5;i++)
      {
        cin>>s2[i];
      }
      for(int i=0;i<5;i++)
      {
        if(s1[0]==s2[i][0] || s1[1]==s2[i][1])
        {
          flag=1;
          break;
        }
      }
      if(flag==1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
      
    }
    
    return 0;
  }
