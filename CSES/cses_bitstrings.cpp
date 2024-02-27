#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    long long n;
    cin>>n;
    long long ans=1;
    while(n--){
        ans = ans << 1;
        ans =ans%mod;
    }
    cout<<ans;
    // fclose(stdin);
    // fclose(stdout);
}