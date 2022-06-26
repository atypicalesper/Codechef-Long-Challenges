#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t;
cin>>t;
while(t --){
    
    int len;
    cin>>len;
    string s1, s2; 
    cin>>s1>>s2;
    string nayi = "";
    int *arr = new int[26];
    for(int i =0; i<26; i++){
        arr[i] = -1;
    }

    for(int i =0 ; i< len; i++){
        if( s1[i] != s2[i] ){
            if(arr[s2[i] - 97] == -1){
                nayi.push_back(s2[i]);
                arr[s2[i] -97]++;
            }
        }
    }
    // cout<<"nayi string is this : " << nayi<<endl;
    cout<<nayi.length()<<"\n";

    delete [] arr;
}


return 0;
}