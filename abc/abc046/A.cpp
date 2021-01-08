#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;

	if(a == b and b == c) cout<<1<<endl;
	else if(a == b or b == c or c == a) cout<<2<<endl;
	else cout<<3<<endl;
}
