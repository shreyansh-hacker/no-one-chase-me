#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n ;
    vector <int> arr(n);
    int sum =0;
    for (int i=0 ; i<n ;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    if (sum %2==0){
        cout<<"True and the sum of given set is Even"<<" " << sum;
    }
    else {
        cout<<"False and the sum of given set is Odd"<<sum;
    }

}