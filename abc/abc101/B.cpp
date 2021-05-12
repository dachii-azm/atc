#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	int num = 0;
	int sum = 0;
	for(int i=0; i<s.size(); i++){
		int ele = s[i] - '0';

		sum = sum + ele;
		num = num + ele * pow(10, s.size() - 1 - i);
	}

	if(num % sum == 0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
