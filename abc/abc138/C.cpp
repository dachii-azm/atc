#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	vector<long double> v;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());

	long double ans=v[0];
	for(int i=1; i<n; i++){
		ans = double(ans + v[i])/double(2);
	}

	cout<<ans<<endl;
}
