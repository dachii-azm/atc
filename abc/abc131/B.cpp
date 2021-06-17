#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, l;
	cin>>n>>l;
	
	int index = 0;
	int sum = 0;

	if(l >=0) index = 0;
	else if(l <0 and abs(l) < n) index = abs(l);
	else index = n - 1;

	for(int i=0; i<n; i++){
		if(i != index){
			sum += l + i;
		}
	}

	cout<<sum<<endl;
}
