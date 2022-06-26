#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;

    while(t--){
        long int x, y;
        cin>>x>>y;
        
        /*
        this is brute force which not works well for bigger differecne numebrs
        int i =1; 
        while(x < y){
            if(i % 2 == 0){
                x = x +2;
                i++;
            }else{
                x = x+1;
                i++;
            }
        }
        if( x == y){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        */
        
        int diff = y -x;
        if(diff % 3 == 2){
            cout<<"NO" << "\n";
        } else{
            cout<<"YES"<<"\n";
        }
        
    }
return 0;
}