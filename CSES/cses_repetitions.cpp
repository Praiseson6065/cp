#include <bits/stdc++.h>

using namespace std;

int main()
{
   string st;
   cin>>st;
   int c=0;
   int max =INT_MIN;
   for(int i=0;i<st.length();i++){
         if(st[i]==st[i+1]){
              c++;
         }
         else{
              c=0;
         }
         if(c>max){
              max=c;
         }
   }
    cout<<max+1;
}