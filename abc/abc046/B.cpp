#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	
	long long int ans = 1;

	for(int i=1; i<=n; i++){
		if(i == 1) ans = ans * k;
		else ans = ans * (k-1);
	}
	
	cout<<ans<<endl;
}
