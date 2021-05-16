#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    string s;
    cin>>t;
    while(t--)
    {
      cin>>s;
      int count=0;
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='(')
          count++;
        else
          count--;
        if(count==-2)
          break;
      }
      if(count==0)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
    }
    
    return 0;
  }
