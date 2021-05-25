#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int max_p = 0;
	int sum = 0;
	for(int i=0; i<n; i++){
		int p;
		cin>>p;

		max_p = max(max_p, p);
		sum += p;
	}

	cout<<sum - (max_p/2)<<endl;


}
