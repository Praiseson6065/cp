#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n;
    cin>>n;
    ll s =((n+1)*(n)/2);
    if(s%2==0){
        cout<<"YES"<<endl;
        s = s/2;
        vector<int> v(n,0);
        cout<<n<<" "<<1<<" ";
        v[n-1]=1,v[0]=1;
        int nxt = n;
        int s1=n+1;
        while(nxt>1){
            int val = (nxt+1)/2;
            if(v[val-1]==1){
                break;
            }
            cout<<val<<" ";
            s1+=val;
            v[val-1]=1;
            nxt = val;
        }
        if(s1!=s){
            cout<<s-s1;
            v[s-s1-1]=1;
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                cout<<i+1<<" ";
            }
        }

    }
    else{
        cout<<"NO";
    }
    fclose(stdin);
    fclose(stdout);

}