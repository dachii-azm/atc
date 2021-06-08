#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;

	string s;
	cin>>s;

	if(s[k-1] == 'A') s[k-1] = 'a';
	else if(s[k-1] == 'B') s[k-1] = 'b';
	else if(s[k-1] == 'C') s[k-1] = 'c';

	for(int i=0; i<n; i++)	cout<<s[i];

	cout<<endl;
}
