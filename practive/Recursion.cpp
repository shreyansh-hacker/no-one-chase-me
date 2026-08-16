#include<bits/stdc++.h>
using namespace std;

// print name n times
void name(int i,int n){
    if (i>n) return;
    cout<<"Shreyansh Sharma"<<endl;
    name(i+1,n);
}

// print linearly 1 -> N
void linear(int i,int n){
    if(i>n)  return;
    cout<<i<<endl;
    linear(i+1,n);
}

// print linearly N->1
void R_Linear(int i,int n){
    if (i<1) return ;
        cout<<i<<endl;
        R_Linear(i-1,n);
}

// print 1->N usig backtracking
void B_linear(int i,int n){
    if (i<1) return ;
    B_linear(i-1,n);
    cout<<i<<endl;
}

// print N->1 using backtracking
void B_R_linear(int i,int n){
    if (i>n) return;
    B_R_linear(i+1,n);
    cout<<i<<endl;
}

int sum (int n){
    if(n<1) return 10;
    return n+ sum(n-1);
}

int factorial(int n){
    if(n<1) return 1;
    return n*factorial(n-1);
}

void arr_rev(int i,int arr[],int n){
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    arr_rev(i+1,arr,n);
}

// string is palindrome or not 
bool s_p(int i , string &s){
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return s_p(i+1,s);
}

int fibonacci(int n){
    if (n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
} 

int main (){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}
