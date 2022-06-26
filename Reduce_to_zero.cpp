#include <bits/stdc++.h>
using namespace std;

/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t =0; cin>>t;
while(t--)
{
    size_t x =0, y = 0;
    cin>> x >> y;

    if(x == y)
    {
        cout<< x <<"\n";
    }
    else if( x == 0 || y == 0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        unsigned long long int temp_min = min(x, y), temp_max = max(x,y), op =0;
        while(temp_min < temp_max)
        {
            temp_min *= 2;
            op++;
        }
        if(temp_min >= temp_max)
        {
            temp_min /= 2;
            op--;
        }
        int inOp = temp_min - (temp_max - temp_min);
        temp_min -= inOp;
        temp_max -= inOp;
        op += inOp;
        temp_min *=2;
        op++;
        op += temp_max;
        cout<<op<<"\n";
    }



}


return 0;
}

*/


//another optimised method
using ll = long long;  // values can be 1e18 
#define endkar "\n"
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x, y; cin>> x>> y;
        if(x>y) swap (x,y);

        if( x == 0 || y == 0){
            cout<<0<<endkar;
        }
        else if( x == 0 ){
            cout << -1 <<endkar;
        }
        else{
            ll ans = 0;
            while(x < y){
                x *= 2;
                ans++;
            }
            cout<<ans + y <<endkar;
        }
    }
    return 0;
    
}










/*
#include <iostream>

int main()
{
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        size_t X = 0, Y = 0;
        std::cin >> X >> Y;
        if (X == Y)
        {
            std::cout << X << '\n';
        }
        else if (X == 0 || Y == 0)
        {
            std::cout << -1 << '\n';
        }
        else
        {
            unsigned long long int temp_min = std::min(X, Y), temp_max = std::max(X, Y), operations = 0;
            while (temp_min < temp_max)
            {
                temp_min *= 2;
                operations++;
            }   
            if (temp_min >= temp_max)
            {
                temp_min /= 2;
                operations--;
            }
            int initial_operations = temp_min - (temp_max - temp_min);
            temp_min -= initial_operations;
            temp_max -= initial_operations;
            operations += initial_operations;
            temp_min *= 2;
            operations++;
            operations += temp_max;
            std::cout << operations << '\n';
        }
    }
}
*/