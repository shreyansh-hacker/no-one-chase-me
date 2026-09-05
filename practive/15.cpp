#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int count=0; 
    // brute force
    // for (int i=0;i<n;i++){
    //     for (int j=i+1;j<n;j++){
    //         if (k==arr[i]+arr[j]){
    //             count++;
    //         }
    //     }
    // }

    // hashing 
    unordered_map <int ,int > freq;
    for (int i=0;i<n;i++){
        int partner = k-arr[i];
        if (freq.find(partner)!=freq.end()){
            count += freq[partner];
        }
        freq [arr[i]]++;
    }
    cout<<count;
}