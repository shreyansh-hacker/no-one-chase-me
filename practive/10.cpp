#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,value;
    cin>>n;
    vector <int> product ;
    for (int i=0;i<n;i++) {
        cin>>value;
        product.push_back(value);
    }
    sort(product.begin(),product.end());
    int front = product[0]*product[1];
    int back = product[n-1]*product[n-2];
    if (front>back){
        cout<<front;
    }
    else{
        cout<<back;
    }


}
