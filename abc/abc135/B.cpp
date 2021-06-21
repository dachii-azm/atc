#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	int p[n];
	int q[n];

	for(int i=0; i<n; i++){ 
		cin>>p[i];
		q[i] = p[i];
	}

	sort(q, q+n);
	
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(p[i] != q[i]) cnt++;
	}

	if(cnt<=2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
