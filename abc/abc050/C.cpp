#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int MOD = 1000000007;
	int n; 
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];

	sort(a, a+n);
	int ans = 1;
	
	if(n%2 == 1){
		for(int i=0; i<n; i++){
			if(i==0 and a[0]!=0){
				ans = 0;
				break;
			}

			if(i!=0 and a[i] != int((i+1)/2) * 2){
				ans = 0;
				break;
			}else {
				if(i%2 == 1) ans = ans *2 % MOD;
			}
		}
		cout<<ans<<endl;
	}else if(n%2 == 0){
		for(int i=0; i<n; i++){
			if(a[i] != int(i/2)*2 + 1){
				ans = 0;
				break;
			}else {
				if(i%2 == 0) ans = ans * 2 % MOD;
			}
		}
		cout<<ans<<endl;
	}
}

