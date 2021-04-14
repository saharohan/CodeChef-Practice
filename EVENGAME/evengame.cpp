#include <iostream>
#include<vector>
using namespace std;
int main() 
{
 int t;
 cin>>t;

while(t--)
{
   int n;
   cin>>n;
    int sum=0;
   vector<int> a(n);
    for (auto& element :a)
    {
        cin >> element;
    }
    for(int i=0; i<n;i++)
   {
   	 sum+=a[i];
   }
   if(sum%2==0)
     cout<<"1"<<endl;
  else
     cout<<"2"<<endl;
     
     }

}
