#include<bits/stdc++.h>
using namespace std;
void freq (int arr[],int n){
    unordered_map <int ,int> map;
    for (int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for (auto it: map){
        cout<<it.first<<" "<<it.second<<endl;
    }
  
}

int main(){
    // number hashing
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // // precompute
    // int hash[13]={0};
    // for (int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // // fetch
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }
 
    // character hashing
    // string s;
    // cin>>s;
    // // precompute 
    // int hash [256]={0};
    // for (int i=0;i<s.size();i++){
    //     hash[s[i]]++;
    // }
    // // fetch
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c]<<endl;
    // }


    // number hashing using map
    // int n;
    // cin>>n;
    // int arr[n];
    // map<int,int>mpp;
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    //     // precompute
    //     mpp[arr[i]]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number ;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
    // }

    // Count frequency of each element in the array
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // freq(arr,n);

    

}
