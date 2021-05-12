#include <bits/stdc++.h>

using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;

	int xdiff = x2 - x1;
	int ydiff = y2 - y1;

	int x3, y3, x4, y4;

	x3 = x2 - ydiff;
	y3 = y2 + xdiff;
	
	xdiff = x3 - x2;
	ydiff = y3 - y2;

	x4 = x3 -  ydiff;
	y4 = y3 + xdiff;

	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}
