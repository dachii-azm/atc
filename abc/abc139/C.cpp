#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n;
	cin>>n;

	long long int h[n];
	for(int i=0; i<n; i++) cin>>h[i];
	

	long long int cnt = 0;
	long long int ans = 0;

	for(int i=0; i<n-1; i++){
		if(h[i] >= h[i+1]) cnt++;
		else{
			ans = max(ans, cnt);
			cnt = 0;
		}
	}
	
	ans = max(ans, cnt);
	cout<<ans<<endl;
}
