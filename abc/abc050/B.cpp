#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	int t[n];
	int sum = 0;
	
	for(int i=0; i<n; i++){
		cin>>t[i];
		sum += t[i];
	}
	
	int m;
	cin>>m;

	for(int i=0; i<m; i++){
		int p, x;
		cin>>p>>x;

		int diff = t[p-1] - x;
		cout<< sum - diff <<endl;
	}
}
