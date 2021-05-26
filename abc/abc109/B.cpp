#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	string w[n];
	string ans = "Yes";

	for(int i=0; i<n; i++) cin>>w[i];

	for(int i=0; i<n-1; i++){
		if(w[i][w[i].size() - 1] != w[i+1][0]){
			ans = "No";
			break;
		}

		for(int j=i+1; j<n; j++){
			if(w[i] == w[j]){
				ans = "No";
				break;
			}
		}
	}

	cout<<ans<<endl;
}
