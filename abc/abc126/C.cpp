#include <bits/stdc++.h>

using namespace std;

int main(){
	
		int n, k;
		cin>>n>>k;
		
		int bin = 1;
		long double half = 1;
		
		long double ans = 0;
		for(int i=n; i>=1; i--){
			
			while(i * bin < k){
				bin = bin * 2;
				half = half * 0.5;
			}

			ans += half;
		}
		

		long double n_fra = (double(1) / double(n));

		ans = ans * n_fra;

		cout<<setprecision(9)<<ans<<endl;
}
