#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin>>s;
  int exist = false;
  
  if(s.size() == 2 and s[0]==s[1]){
    cout<<1<<" "<<2<<endl;
    exist = true;
  }

  for(int i=0; i<s.size()-2; i++){
    if(s[i]==s[i+1] or s[i]==s[i+2] or s[i+1]== s[i+2]){
      cout<<i+1<<" "<<i+3<<endl;
      exist = true;
      break;
    }
  }

  if(exist==false) cout<<-1<<" "<<-1<<endl;
}
