#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans = 0;
    for(long long i=1;i<n;i++){
        if((n/pow(5,i))>0){
            ans += (n/pow(5,i));
        }
        else break;
    }
    cout<<ans;
}