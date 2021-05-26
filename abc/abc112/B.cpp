#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin>>n>>t;

	int route[n][2];
	for(int i=0; i<n; i++) cin>>route[i][0]>>route[i][1];
	
	int ans = 1010;
	for(int i=0; i<n; i++){
		if(route[i][1] <= t){
				ans = min(ans, route[i][0]);
		}
	}

	if(ans == 1010) cout<<"TLE"<<endl;
	else cout<<ans<<endl;

}
