#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
	
	if(x < y) return gcd(y, x);

    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}


int main(){

	int n;
	cin>>n;

	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];

	int ans = a[0];
	for(int i=1; i<n; i++) ans = gcd(ans, a[i]);
	cout<<ans<<endl;
}
