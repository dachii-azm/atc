#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, x;
	cin>>k>>x;
	
	int ans = x-k+1;
	for(int i=0; i< 2*k - 1; i++){
		cout<<ans<<" ";
		ans++;
	}

	cout<<""<<endl;
}
