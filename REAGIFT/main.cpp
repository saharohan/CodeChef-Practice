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
   int count=0;
  cin>>n;

   
 vector<int> a(n);
    for (auto& element : a)
    {
    
        cin >> element;
    }
    
     vector<int> b(n);
    for (auto& element : b)
    {
        cin >> element;
    }

     for( int i=0;  i<n; i++)

     {

           if((b[i] != a[i]))
           {
           int k=i;
            
            while(b[k] != a[i])
            {
                k++;
              
             }
           
            
            int temp;
            temp= b[k];
            b[k] = b[i];
            b[i]= temp;
            count++;
        }
    }
     cout<<"\n";
    cout<<count;
}

}
