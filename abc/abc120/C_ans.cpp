#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	int cnt[2];
	memset(cnt, 0, sizeof(cnt));

	for(int i=0; i<s.size(); i++) cnt[s[i] - '0']++;

	cout<<min(cnt[0], cnt[1]) * 2<<endl;
}
