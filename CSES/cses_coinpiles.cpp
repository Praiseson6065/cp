#include <bits/stdc++.h>
using namespace std;

int main(){
    //  freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    long long n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(a==0 && b==0){
            cout<<"YES";
        }
        else if((a+b)%3==0 && a>0 && b>0){
            cout<<"YES";
        }else cout<<"NO";

        cout<<endl;

    }
    // fclose(stdin);
    // fclose(stdout);
}