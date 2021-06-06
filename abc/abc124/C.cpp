#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	int even = 0;
	int odd = 0;


	for(int i=0; i<s.size(); i++){
		if(i%2 != 0){
			if(s[i] == '0') even++;
			else if(s[i] == '1') odd++;
		}else if(i%2 == 0){
			if(s[i] == '0') odd++;
			else if(s[i] == '1') even++;
		}
	}

	cout<<min(even, odd)<<endl;


}
