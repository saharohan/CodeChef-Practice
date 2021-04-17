#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
{ 
    long long int n,c;
	cin>>n>>c;
	if(c==0)
	cout<<0<<" "<<n<<endl;
	else
	cout<<n/c<<" "<<n%c<<endl;
}
return 0;
}
