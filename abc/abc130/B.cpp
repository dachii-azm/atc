#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x;
	cin>>n>>x;

	int l[n];
	for(int i=0; i<n; i++) cin>>l[i];

	int d = 0;
	int i = 0;
	while(d <= x and i <= n){
		d = d + l[i];
		i++;
	}

	cout<<i<<endl;
}
