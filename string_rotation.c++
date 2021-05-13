#include <bits/stdc++.h>
  using namespace std;
  string reverse (string s,int l,int r)
  {
    string s1=s;
    int j=r;
    for(int i=l;i<=r;i++)
    {
      s[i]=s1[j];
      j--;
    }
    return s;
  }
  int main()
  {
    int m,l,r,k;
    string s;
    cin>>s;
    cin>>m;
    while(m--)
    {
      cin>>l>>r>>k;
      k=k%(r-l+1);
      l=l-1;
      r=r-1;
      s=reverse(s,r-k+1,r);
      s=reverse(s,l,r-k);
      s=reverse(s,l,r);
    }
    cout<<s;
    return 0;
  }
