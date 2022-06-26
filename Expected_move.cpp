#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

long t; cin>>t; 
while(t--)
    {
        long long x, n;
        cin>>x>>n;

        cout<< ( (x-1) * ((2*n) - x));
        cout<<"\n";
    }        
return 0;
}