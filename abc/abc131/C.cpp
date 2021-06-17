#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

long long int lcm(long long int a, long long int b)
{
   return a * b / gcd(a, b);
}


int main(){
	long long int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	long long int lcm_cd = lcm(c, d);
	long long int cd_in_b = b/(lcm_cd);
	long long int cd_in_a = a/(lcm_cd);
	
	long long int c_in_b = b/c;
	long long int d_in_b = b/d;
	long long int c_in_a = a/c;
	long long int d_in_a = a/d;
	
	long long int cd_in_ab;
	long long int c_in_ab;
	long long int d_in_ab;
	
	if(a % (lcm_cd) == 0) cd_in_ab = cd_in_b - cd_in_a + 1;
	else cd_in_ab= cd_in_b - cd_in_a;

	if(a % c == 0) c_in_ab = c_in_b - c_in_a + 1;
	else c_in_ab = c_in_b - c_in_a;

	if(a % d == 0) d_in_ab = d_in_b - d_in_a + 1;
	else d_in_ab = d_in_b - d_in_a;

	long long int ans = (b - a + 1) - ((c_in_ab + d_in_ab) - cd_in_ab);
	
	cout<<ans<<endl;
}
