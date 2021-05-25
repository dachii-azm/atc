#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s, t;
	cin>>s>>t;
	
	string ans = "Yes";

	for(char c = 'a'; c<='z'; c++){
		int f_s = 0;
		int f_t = 0;
		for(int i=0; i<s.size(); i++){
			char ref_t;
			char ref_s;
			if(s[i] == c and f_s == 0){
				ref_t = t[i];
				f_s++;
			}

			if(s[i] == c and f_s != 0){
				if(t[i] != ref_t){
					ans = "No";
					break;
				}
			}

			if(t[i] == c and f_t == 0){
				ref_s = s[i];
				f_t++;
			}

			if(t[i] == c and f_t !=0){
				if(s[i] != ref_s){
					ans = "No";
					break;
				}
			}
		}
	}

	cout<<ans<<endl;
}
