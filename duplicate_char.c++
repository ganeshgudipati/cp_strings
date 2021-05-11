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
      int freq[26];
      int flag=0;
      for(int i=0;i<26;i++)
        freq[i]=0;
      for(int i=0;i<s.length();i++)
        freq[s[i]-97]++;
      sort(s.begin(),s.end());
      for(int i=0;i<s.length();i++)
      {
        if(freq[s[i]-97]>1)
        {
          cout<<s[i]<<"="<<freq[s[i]-97]<<" ";
          freq[s[i]-97]=0;
          flag=1;
        }
      }
      if(flag==0)
      {
        cout<<-1;
      }
      cout<<endl;  
    }
    
    return 0;
  }
