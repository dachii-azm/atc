#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n], b[n], c[n-1];
	
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	for(int i=0; i<n-1; i++) cin>>c[i];
	
	int ans = 0;
	int last = 1000;
	for(int i=0; i<n; i++){
		ans += b[a[i]-1];
		if(a[i] - 1 == last + 1) ans += c[last];

		last = a[i]-1;
	}

	cout<<ans<<endl;
}
