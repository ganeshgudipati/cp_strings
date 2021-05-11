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
        if(s[i]=='a')
        {
          count++;
        }
      }
      if(count>(s.length()/2))
      {
        cout<<s.length()<<endl;
      }
      else
      {
        cout<<(2*count)-1<<endl;
      }
    }
    
    return 0;
  }
