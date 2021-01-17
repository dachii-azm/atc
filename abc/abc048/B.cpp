#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a, b, x;
  cin>>a>>b>>x;
  
  long long int cnt = 0;
  long long int upper = b / x;
  long long int lower = a / x;

  if(a%x == 0) cout<<upper - lower + 1<<endl;
  else cout<<upper - lower<<endl;
}
