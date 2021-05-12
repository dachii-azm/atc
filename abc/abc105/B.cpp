#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	string a = "No";
	for(int i=0; i<16; i++){
		for(int j=0; j< 25 - ((7*i)/4) + 1; j++){
			int ans = 7 * i + 4 * j;
			if(ans == n){
				a = "Yes";
				break;		
			}
		}
	}

	cout<<a<<endl;
}
