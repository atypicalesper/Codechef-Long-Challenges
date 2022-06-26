#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long int t; cin>>t;
while (t--){
    long int n;
    cin>>n;
    int temp =n;
    int arr[n] = {};

    for(int i = temp-1; i>=0; i= i-2){
        arr[i] =temp;
        temp--;
    }
    temp =n;
    int ne =1;
    for(int i = temp-2; i>=0; i= i-2){
        arr[i] = ne;
        ne++;
    }

    for(int i =0; i<temp; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

return 0;
}


/*
    for n = 4  --  2 3 1 4
            5  --  3 2 4 1 5
            6  --  3 4 2 5 1 6
            7  --  4 3 5 2 6 1 7
            8  --  4 5 3 6 2 7 1 8  
    catch the pattern fill accordingly
    
*/