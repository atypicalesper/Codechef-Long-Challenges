#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int t; 
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    int factor=0;
    int n = abs(a-b);

    for(int i =1 ; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            if(n/i==i)
            {
                factor++;
            }else
            {
                factor+=2;
            }
        }
    }
    cout<<factor<<"\n";
}

return 0;
}