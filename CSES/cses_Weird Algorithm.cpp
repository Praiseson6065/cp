#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n>0)
    {
        if(n==1)    
        {
            break;
        }
        else if(n%2==0)
        {
            n = n/2;
            
        }
        else if(n%2!=0)
        {
            n = 3*n +1;
        }
        cout<<n<<" ";
    }
    
    
    
    
}