#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;

	long long int lim[5];
	long long int t[6] = {n, 0, 0, 0, 0, 0};

	for(int i=0; i<5; i++) cin>>lim[i];
	
	long long int ans = 0;

	while(t[5] != n){
		long long int diff_0 = min(t[0], lim[0]);
		long long int diff_1 = min(t[1], lim[1]);
		long long int diff_2 = min(t[2], lim[2]);
		long long int diff_3 = min(t[3], lim[3]);
		long long int diff_4 = min(t[4], lim[4]);

		t[0] = t[0] - diff_0;
		t[1] = t[1] + diff_0 - diff_1;
		t[2] = t[2] + diff_1 - diff_2;
		t[3] = t[3] + diff_2 - diff_3;
		t[4] = t[4] + diff_3 - diff_4;
		t[5] = t[5] + diff_4;

		ans++;
	}

	cout<<ans<<endl;
}
