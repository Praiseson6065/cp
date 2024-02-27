#include <bits/stdc++.h>
using namespace std;
vector<pair<char,char>> v;
void toh(int n,char A,char B,char C){
    if(n==1){
        v.push_back({A,C});
        return ;
    }
    toh(n-1,A,C,B);
    v.push_back({A,C});
    toh(n-1,B,A,C);
}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    toh(n,'1','2','3');
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    // fclose(stdin);
    // fclose(stdout);
}