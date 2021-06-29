#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n, k, q;
	cin>>n>>k>>q;
		
	long long int men[n];
	memset(men, 0, sizeof(men));

	for(int i=0; i<q; i++){
		int a;
		cin>>a;
		men[a-1]++;
	}

	for(int i=0; i<n; i++){
			if(k - q + men[i] > 0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			
	}
}
