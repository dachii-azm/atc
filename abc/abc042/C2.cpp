#include <bits/stdc++.h>

using namespace std;

int n, k, d[10];

bool check(int x){
  string st_x = to_string(x);
  for(int i=0; i<st_x.size(); i++){
    int x_ele = st_x[i] - '0';
    if(d[x_ele] == 1) return false; 
  }
  return true;
}

int main(){
  cin>>n>>k;

  for(int i=0; i<k; i++){
    int ele;
    cin>>ele;
    d[ele] = 1;
  }

  while(1){
    if(check(n)){
      cout<<n<<endl;
      break;
    }else n++;
  }
}
