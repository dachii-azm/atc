#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;

	long double a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	long double  deno = 0;
	for(int i=0; i<n; i++){
		deno += double(1)/a[i];
	}

	long double ans = double(1)/deno;
	cout<< fixed << setprecision(10) << ans<<endl;
}
