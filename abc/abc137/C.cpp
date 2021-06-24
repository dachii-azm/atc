#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;

	string s[n];
	for(long long int i=0; i<n; i++){
		cin>>s[i];
		sort(s[i].begin(), s[i].end());
	}

	sort(s, s+n);
	
	long long int ans = 0;
	int i = 0;
	while(i < n-1){
		long long int j = i+1;
		long long int cnt = 0;
		while(s[i] == s[j]){
			j++;
			cnt++;
			ans += cnt;
		}

		i = j;
		
	}

	cout<<ans<<endl;
	

	
}
