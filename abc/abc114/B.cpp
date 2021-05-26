#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	int ans = 1000000;

	for(int i=0; i<s.size() - 2; i++){
		int h = s[i] - '0';
		int t = s[i+1] - '0';
		int o = s[i+2] - '0';

		int num = 100*h + 10*t + o;
		
		ans = min(ans, abs(753 - num));
	}

	cout<<ans<<endl;
}
