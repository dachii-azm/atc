#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	int h[n];
	for(int i=0; i<n; i++) cin>>h[i];
	
	int ans = 0;
	for(int i=0; i<n; i++){
		bool is_good = true;
		for(int j=0; j<i; j++){
			if(h[i] < h[j]){
				is_good = false;
				break;
			}
		}

		if(is_good == true) ans++;
	}

	cout<<ans<<endl;
}
