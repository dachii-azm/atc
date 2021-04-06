#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s, t;
	cin>>s>>t;

	string new_t = t + t;
	
	string ans = "No";
	for(int i=0; i<s.size(); i++){
		string sub = new_t.substr(i, s.size());
		if(sub == s){
			ans = "Yes";
			break;
		}
	}

	cout<<ans<<endl;
}
