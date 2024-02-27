#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long int ans = 0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            ans += a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    for(auto x : a){
        cout<<x<<" ";
    }
    cout << ans << endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}