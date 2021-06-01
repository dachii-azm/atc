#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;

	int year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
	int month = (s[5] - '0') * 10 + (s[6] - '0');
	int day = (s[8] - '0') * 10 + (s[9] - '0');

	if(year >= 2020) cout<<"TBD"<<endl;
	else if(year == 2019 and month >= 5) cout<<"TBD"<<endl;
	else cout<<"Heisei"<<endl;
}
