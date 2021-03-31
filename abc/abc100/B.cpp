#include <bits/stdc++.h>

using namespace std;

int main(){
	int d, n;
	cin>>d>>n;

	long long int ans;
	
	if(n!=100) ans = pow(100, d) * n;
	else if(n==100) ans = pow(100, d) * (n+1);
	cout<<ans<<endl;
}
