#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;

	int front = (s[0] - '0') * 10 + (s[1] - '0');
	int back = (s[2] - '0') * 10 + (s[3] - '0');

	bool front_MM;
	bool back_MM;

	if(front <= 12 and front >= 1) front_MM = true;
	else front_MM = false;

	if(back <= 12 and back >= 1) back_MM = true;
	else back_MM = false;

	if(front_MM and back_MM) cout<<"AMBIGUOUS"<<endl;
	else if(!front_MM and back_MM) cout<<"YYMM"<<endl;
	else if(front_MM and !back_MM) cout<<"MMYY"<<endl;
	else cout<<"NA"<<endl;
}
