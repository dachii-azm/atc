#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a[3];
	cin>>a[0]>>a[1]>>a[2];

	sort(a, a+3);
	
	int ans = 0;
	for(int i=0; i<2; i++){
		ans += abs(a[i+1] - a[i]);
	}

	cout<<ans<<endl;
}
