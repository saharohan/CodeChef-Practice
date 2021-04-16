#include<iostream>
#include<vector>
using namespace std;
int main()

{
    int t;
    cin>>t;
    
while(t--)
    {
	
    int n;
	int c;
    int sum=0;
    cin>>n>>c;
    
    vector<int> a(n);
    for (auto& element : a)
    {
        cin >> element;
        
        
    }
    for(int i=0 ; i<n; i++)
    {
    	sum+=a[i];

    }
    int S= a[0];
    for(int  i=0; i<n; i++)
    {  
         
       
        if(a[i]<S)
        
            S=a[i];
        
    }
    
     
     if(S <= sum % c)
     
         cout<<-1<<endl;
     
     else
     cout<<sum / c<<endl;


     }

}
