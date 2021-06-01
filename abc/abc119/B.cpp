#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	double ans = 0;
	for(int i=0; i<n; i++){
		double x;
		cin>>x;
		string s;
		cin>>s;

		if(s == "JPY") ans += x;
		else if(s == "BTC") ans += x * 380000;
	}

	cout<<ans<<endl;
}
