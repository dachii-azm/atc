#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  
  int ans = 1000000;

  sort(a, a+n);
  for(int i=a[0]; i<=a[n-1]; i++){
    int cost = 0;
    for(int j=0; j<n; j++) cost = cost + pow(a[j]-i, 2);
    ans = min(ans, cost);
  }

  cout<<ans<<endl;
}
