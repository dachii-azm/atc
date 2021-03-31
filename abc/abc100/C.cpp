#include <bits/stdc++.h>

using namespace std;

int main(){

	long long int n;
	cin>>n;

	long long int a[n];
	int cnt = 0;
	bool isFin = false;

	for(int i=0; i<n; i++) cin>>a[i];
	
	while(isFin == false){
		isFin = true;
		for(int i=0; i<n; i++){
	 		if(a[i] % 2 == 0){
				a[i] = a[i]/2;
				cnt++;
				isFin = false;
			}
		}
		//cout<<isFin<<endl;
	}

	cout<<cnt<<endl;
}
