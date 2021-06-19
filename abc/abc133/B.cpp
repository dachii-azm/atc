#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d;
	cin>>n>>d;
	int x[n][d];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<d; j++){
			cin>>x[i][j];
		}
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int r=i+1; r<n; r++){
			int dis2 = 0;
			for(int j=0; j<d; j++){
				dis2 += pow(x[i][j] - x[r][j], 2);
			}
			double dis = sqrt(double(dis2));
			if(dis == int(sqrt(dis2))) ans++;
		}
	}

	cout<<ans<<endl;
}
