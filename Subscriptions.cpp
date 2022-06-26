#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;

    while(t--){
        int n, y;
        cin>>n>>y;

        int temp = n / 6;
        if(n % 6 ==0){
            cout<< temp * y;
        }else{
            cout<< (temp+1)*y;
        }
        cout<<"\n";
    }
return 0;
}