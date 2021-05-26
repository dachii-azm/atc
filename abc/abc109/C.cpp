#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
    }
}

int main(){
	
	long long int n, x;
	cin>>n>>x;

	long long int xpos[n];

	for(int i=0; i<n; i++){
		int pos;
		cin>>pos;

		xpos[i] = pos - x;
	}

	int ans	= xpos[0];
	for(int i=0; i<n; i++){
		ans = gcd(xpos[i], ans);
	}

	cout<<ans<<endl;


}
