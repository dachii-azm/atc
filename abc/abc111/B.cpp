#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	bool is_fin = false;

	while(is_fin == false){
		int n_100 = n / 100;
		int n_10 = (n % 100) / 10;
		int n_1 = ((n % 100) % 10);
		
		if(n_100 == n_10 and n_100 == n_1){
			cout<<n_100 * 100 + n_10 * 10 + n_1 <<endl;
			is_fin = true;
			break;
		}else{
			n++;
		}
	}

}
