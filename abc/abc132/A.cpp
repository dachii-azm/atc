#include <bits/stdc++.h>

using namespace std;

int main(){
	
		string s;
		cin>>s;

		if(s[0] == s[1] and s[2] == s[3] and s[0] != s[2]) cout<<"Yes"<<endl;
		else if(s[0] == s[2] and s[1] == s[3] and s[0] != s[1]) cout<<"Yes"<<endl;
		else if(s[0] == s[3] and s[1] == s[2] and s[0] != s[1]) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
}
