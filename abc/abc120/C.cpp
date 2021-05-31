#include <bits/stdc++.h>

using namespace std;

int main(){
	
		string s;
		cin>>s;
		
		bool is_continue = true;	
		int cnt = 0;

		while(is_continue == true){
			is_continue = false;
			int i = 0;
			while(i < s.size() -1){
					if(((s[i] - '0') + (s[i+1] - '0')) == 1){
						s.erase(i, 2);
						cnt += 2;
						is_continue = true;
					}else i++;

					if(s.size() == 0){
						is_continue = false;
						break;
					}
			}

			if(s.size() == 0) break;
		}
		
		cout<<cnt<<endl;
}
