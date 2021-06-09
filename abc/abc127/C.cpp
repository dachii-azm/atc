#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin>>n>>m;

  int lr[m][2];
  for(int i=0; i<m; i++) cin>>lr[i][0]>>lr[i][1];

  int l = 0;
  int r = 100010;

  for(int i=0; i<m; i++){
    if(lr[i][0] >= l) l=lr[i][0];

    if(lr[i][1] <= r) r=lr[i][1]; 
  }

  cout<<max(0, r - l + 1)<<endl;
}

