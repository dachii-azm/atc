#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;

	long long int d[n];
	for(int i=0; i<n; i++) cin>>d[i];

	long long int sum_n = 0;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			sum_n += (d[i] * d[j]);
		}
	}

	cout<<sum_n<<endl;
}
