#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;

	string s;
	cin>>s;
	
	int sum_n = 1;
	for(int i=0; i<n-1; i++){
		if(s[i] != s[i+1]) sum_n++;
	}

	cout<<sum_n<<endl;
}
