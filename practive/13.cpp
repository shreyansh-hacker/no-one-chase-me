#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> date;
    string digits;
    cin>>digits;
    date.push_back(digits);
    int year = stoi(date[0].substr(0,4));
    int month = stoi(date[0].substr(5,2));
    int month_count[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if ((year%4==0&&year%100!=0)||(year%400==0)){
        month_count[1]=29;
    }
    int days=stoi(date[0].substr(8,2));
    for (int i=1;i<month;i++){
        days += month_count[i-1];
    }
    cout<<days;
}