#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll value(ll x,ll y){
    if(x<y){
        if(y%2!=0){
            return (y*y)-(x-1);
        }
        else{
            return (y-1)*(y-1) + (x) ;
        }
    }
    else{
        if(x%2==0){
            return (x*x)- (y-1);
        }
        else{
            return (x-1)*(x-1) +(y);

        }
    }

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r,c;
        cin>>r>>c;
        cout<<value(r,c)<<endl;
    }
}   