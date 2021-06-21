#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n;
	cin>>n;

	long long int a[n+1];
	long long int b[n];

	for(int i=0; i<n+1; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	
	long long int ans = 0;

	for(int i=0; i<n; i++){
		if(a[i] > b[i]){
			ans += b[i];
			a[i] = a[i] - b[i];
			b[i] = 0;
		}else{
			ans += a[i];
			if(a[i+1] > (b[i] - a[i])){
				ans += b[i] - a[i];
				a[i+1] = a[i+1] - (b[i] - a[i]);
				a[i] = 0;
				b[i] = 0;
			}else{
				ans += a[i+1];
				a[i+1] = 0;
				a[i] = 0;
				b[i] = b[i] - a[i] - a[i+1];
			}
		}
	}

	cout<<ans<<endl;
}


