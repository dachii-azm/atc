#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	long double xy[n][2];
	for(int i=0; i<n; i++) cin>>xy[i][0]>>xy[i][1];

	vector<int> v(n);
	long double cnt = 0;
	long double ans = 0;
	//順列 junretsu
	iota(v.begin(), v.end(), 0);
  	do{
		long double sum_dis = 0;
    		for(int i=0;i<n-1;i++){
			long double dis = pow(abs(xy[v[i+1]][0] - xy[v[i]][0]), 2) + pow(abs(xy[v[i+1]][1] - xy[v[i]][1]), 2);
			sum_dis += sqrt(dis);
    		}
		ans += sum_dis;
		cnt++;
  	}while(next_permutation(v.begin(),v.end()));
	
	//cout<<ans<<" "<<cnt<<endl;
	long double mean = double(ans/cnt);
	cout<<setprecision(9)<<double(ans/cnt)<<endl;
}
