#include <iostream>
#include<vector>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
{
int n,k,l,sum;
cin>>n>>k;
int count=0;
 vector<int> a(n);
  for (auto& element : a)
   {
     cin >> element;
   }
for(int i=0;i<n;i++)
{
   for(int j=0; j<n; j++)
	 {
	 	if(j!=i)
	 	{
      sum+=a[j];
   }

	 }
	 if(a[i]+k>sum)
	 {
	 	count++;
	 }
	sum=0;
	 }
    cout<<count<<"\n";
    }
}
