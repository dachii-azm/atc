#include <bits/stdc++.h>

using namespace std;

long long int  f(long long int b, long long int x){
	if(x == 0) return 0;
	return f(b, x/b) + x%b;
}

int main(){
	long long int n, s;
	cin>>n>>s;
	long long int ans = 100000000010;

	if(s==n) ans = n+1;
	else{
		//2<=b<=√nで全探索
		for(long long int i = 2; i <= sqrt(n); i++){
			if(s == f(i, n)){ 
				ans = i;
				break;
			}
		}
		
		//√n<b<=nの時
		for(long long int p = sqrt(n) - 1; p >= 1; p--){
			long long int b = ((n - s)/p) + 1;
			if(b > sqrt(n) and b <= n){
				if(s == f(b, n)){
					ans = min(ans, b);
					break;
				}
			}
		}
	}
	
	if(ans<=100000000000) cout<<ans<<endl;
	else cout<<-1<<endl;
}

