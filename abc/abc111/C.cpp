#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	
	const int Limit = 100010;

	int even[Limit];
	int odd[Limit];
	int num[Limit];
	

	memset(even, 0, sizeof(even));
	memset(odd, 0, sizeof(odd));
	memset(num, 0, sizeof(num));

	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		
		num[a]++;
		if(i%2 == 0) even[a]++;
		else if(i%2 != 0) odd[a]++;
	}
	
	sort(even, even+Limit, greater<>());
	sort(odd, odd+Limit, greater<>());
	sort(num, num+Limit, greater<>());
	
	int ans = 0;
	if(even[0] + odd[0] == num[0]){
		int ans1 = 0;
		int ans2 = 0;
		ans1 += n/2 - even[0];
		ans1 += n/2 - odd[1];
		ans2 += n/2 - even[1];
		ans2 += n/2 - odd[0];
		ans = min(ans1, ans2);
	}else{
		ans += n/2 - even[0];
		ans += n/2 -odd[0];
	}
	
	cout<<ans<<endl;

}
