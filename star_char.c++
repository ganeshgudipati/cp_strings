#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      string s;
      int freq[26];
      for(int i=0;i<26;i++)
      {
        freq[i]=0;
      }
      for(int i=0;i<n;i++)
      {
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
          if(freq[s[j]-97]==i)
          {
            freq[s[j]-97]++;
          }
        }
      }
      int count=0;
      for(int i=0;i<26;i++)
      {
        if(freq[i]==n)
          count++;
      }
      cout<<count<<endl;
    }
    
    return 0;
  }
