#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, xk, yk;
	cin>>n>>m>>xk>>yk;

	int x[n], y[m];
	for(int i=0; i<n; i++) cin>>x[i];
	for(int j=0; j<m; j++) cin>>y[j];
	
	string ans = "War";
	for(int i = xk + 1; i<=yk; i++){
		int z = i;
		bool x_is_safe = true;
		bool y_is_safe = true;
		for(int j = 0; j<n; j++){
			if(x[j] >= z){
				x_is_safe = false;
				break;
			}
		}
		
		for(int r = 0; r<m; r++){
			if(y[r]<z){
				y_is_safe = false;
				break;
			}
		}

		if(x_is_safe == true and y_is_safe == true) ans = "No War";
	}

	cout<<ans<<endl;
}
