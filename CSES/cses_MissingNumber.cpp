#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n-1;i++)
    {
        int temp ;
        cin>>temp;
        sum +=temp;
    }
    cout<<(n*(n+1)/2) - sum ;
}