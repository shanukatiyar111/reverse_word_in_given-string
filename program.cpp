#include<bits/stdc++.h>
using namespace std
  
  int main()
{
  string s= " this.is.git.first.file"
    reverse_string(s);
}

void reverse(string st)
{
  string temp="";
  string p="";
  for(int i=0;i<st.size() ;i++)
  {
    temp +=st[i];
    if(st[i]=='.')
    {
      p += temp;
      p +='.';
      p.clear();
      
    }
  }
  p +=temp;
  
  for(int i=0;i<p.size();i++)
  {
    cout<<p[i];
  }
  
}
