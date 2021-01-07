#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;
	cin>>n>>a;
	int min_x = 0, max_x = 0;
	int x[n];
	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;

		x[i] = ele - a;
		if(x[i] < 0) min_x += x[i];
		if(x[i] > 0) max_x += x[i];
	}

	int width = max_x - min_x +1;
	long long int dp[60][width+10];
	memset(dp, 0, sizeof(dp));
	dp[0][-min_x] = 1;
	

	for(int i=1; i<n+1; i++){
		for(int j=0; j < width; j++){
			dp[i][j] += dp[i-1][j];
			if(j - x[i-1] >= 0 and j - x[i-1] < width) dp[i][j] += dp[i-1][j - x[i-1]];
		}
	}

	cout<<dp[n][-min_x] - 1<<endl;
}
