#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int l, r;
	cin>>l>>r;

	long long int num1 = l/2019;
	long long int num2 = r/2019;
	
	long long int ans = 2020;
	if(num2 - num1 >=3) cout<<0<<endl;
	else{
		for(long long int i=l; i<=r-1; i++){
			for(long long int j=i+1; j<=r; j++){
				long long int a = i%2019;
				long long int b = j%2019;
				ans = min((a*b)%2019, ans);
			}
		}

		cout<<ans<<endl;
	}

}

