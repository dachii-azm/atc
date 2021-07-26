#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;

	string s;
	cin>>s;
	
	string ans = "Yes";
	
	if(n %2 != 0) ans = "No";
	else{
		for(int i=0; i< n/2; i++){
			if(s[i] != s[i+n/2]){
				ans = "No";
				break;
			}
		}
	}

	cout<<ans<<endl;
}
