#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool done =false;
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            cout<<arr[i+1];
            done=true;
            break;
        }
    }
    if (!done){
        cout<<arr[0];
    }
}