#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t, a;
	cin>>n>>t>>a;

	int h[n];
	for(int i=0; i<n; i++) cin>>h[i];
	double ans = 10000000;
	int index = 0;
	for(int i=0; i<n; i++){
		double temp = t - 0.006 * h[i];
		if(ans > abs(a-temp)){
			ans = abs(a - temp);
			index = i;
		}
	}

	cout<<index+1<<endl;
}
