#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b, c;
	cin>>a>>b>>c;

	bool end = false;
	char turn = 'a';

	while(end == false){
		if(turn == 'a'){
			if(a.empty()){
				cout<<"A"<<endl;
				break;
			}
			turn = a[0];
			a.erase(0, 1);
		}else if(turn == 'b'){
			if(b.empty()){
				cout<<"B"<<endl;
				break;
			}
			turn = b[0];
			b.erase(0, 1);
		}else if(turn == 'c'){
			if(c.empty()){
				cout<<"C"<<endl;
				break;
			}
			turn = c[0];
			c.erase(0, 1);
		}
		
	}
}
