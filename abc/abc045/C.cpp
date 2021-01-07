#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	int num[s.size()];

	for(int i = 0; i < s.size(); i++){
		num[i] = s[i] - '0';
	}	
	
	long long int ans = 0;
	for(int bit = 0; bit < (1<<s.size()-1); bit++){
		long long int sep = 0;
		long long int sum = 0;
		for(int i=0; i < s.size() - 1; i++){
			sep += num[i];
			if(bit & (1<<i)){
				sum += sep;
				sep = 0;
			}else if(!(bit & (1<<i))){
			//}else{
				sep = sep * 10;
			}
		}

		sum += sep + num[s.size()-1];
		ans += sum;
	}

	cout<<ans<<endl;
}
