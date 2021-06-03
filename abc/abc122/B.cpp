#include <bits/stdc++.h>

using namespace std;

int main(){

		string s;
		cin>>s;
		bool is_acgt = false;
		int cnt = 0;
		int ans = 0;

		for(int i=0; i<s.size(); i++){
			if(s[i] == 'A' or s[i] == 'C' or s[i] == 'G' or s[i] == 'T'){
				if(is_acgt == false){
					is_acgt = true;
					cnt = 1;
				}else if(is_acgt == true){
					cnt++;
				}
				ans = max(ans, cnt);	
			}else{
				is_acgt = false;
				ans = max(ans, cnt);
				cnt = 0;
			}
		}

		cout<<ans<<endl;
}
