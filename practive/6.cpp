#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool pass=true;
    // int right=s.length()-1;
    // for (int i=0; i< s.length()/2;i++){
    //     if (s[i]==s[right]){
    //         right--;
    //     }
    //     else{
    //         pass = false;
    //         break;
    //     }
    // }

    pass=equal(s.begin(),s.begin()+s.length()/2,s.rbegin());

    cout<<boolalpha<<pass;
}
