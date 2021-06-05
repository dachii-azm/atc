#include <bits/stdc++.h>

using namespace std;

int main(){
	int an[5];
	for(int i=0; i<5; i++) cin>>an[i];

	int k;
	cin>>k;
	
	string ans = "Yay!";

	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(abs(an[i] - an[j]) > k){
				ans = ":(";
				break;
			}
		}
	}

	cout<<ans<<endl;
}
