#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	string ans = "Yes";
	for(int i=0; i<s.size(); i++){
			if(i % 2 == 0){
					if(s[i] == 'R' or s[i] == 'U' or s[i] == 'D'){
							continue;
					}else{
							ans = "No";
							break;
					}	
			}else{
					if(s[i] == 'L' or s[i] == 'U' or s[i] == 'D'){
							continue;
					}else{
							ans = "No";
							break;
					}
			
			}
	}

	cout<<ans<<endl;
}
