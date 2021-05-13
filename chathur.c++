#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    string s;
    while(t--)
    {
      int count=0;
      cin>>s;
      int n=s.length();
      for(int i=0;i<n/2;i++)
      {
        count=count+abs(s[i]-s[n-1-i]);
      }
      cout<<count<<endl;
    }
    
    return 0;
  }
