 #include<bits/stdc++.h>
 using namespace std;
 int count (int n){
    if (n==0) return 1;
    int count=0;
    while (n>0){
        int last_digit = n;
        n= n/10;
        count++;
    }
    return count ;
 }

// second method
int count2(int n){
    if (n==0) return 1;
    int cnt = (int) (log10(n)+1);
    return cnt;
}

// revere digit of  number also removing trailing zeros
int rev(int n){
    int revNum=0;
    while (n>0){
        int ld = n%10;
        revNum = (revNum *10)+ld;
        n=n/10;
    }
    return revNum;
}

string palindrome(int n){
    int dupN=n;
    int revNum=0;
    while(n>0){
        int ld=n%10;
        revNum=(revNum*10)+ld;
        n=n/10;
    }
    if (revNum==dupN) return "Yes number is palindrome";
    else return "No number is not in palindrome";
}

string armstrong(int n){
    int dup=n,sum=0;
    int digits = to_string(n).length();
    while (n>0){
        int ld= n%10;
        sum = sum + round(pow(ld,digits));
        n=n/10;
    }
    if (sum == dup) return "Yes no. is armstrong " ;
    else return "No given no. is not an armstrong" ;
}

void print_divisor(int n){
    cout<<"Below are all possible divisor of given number "<<endl;
    for (int i=1;i<=n;i++){
        if (n%i==0) cout<<i<<endl;
    }
}

// second method
void print_divisor2 (int n){
    vector <int> ls;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            ls.push_back(i);
            if ((n/i)!=i){
                ls.push_back(n/i);
            }
        }

    }
    sort(ls.begin(),ls.end());
    for (auto it: ls) cout<< it <<" ";
    
}

string prime(int n){
    int count =0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            count++;
            if ((n/i)!=i){
                count++;
            }
        }
    }
    if (count==2) return "Yes the no. is Prime ";
    else return "No , the number is not an Prime";
}

void gcd (int a,int b){
    while (a>0 && b>0){
        if (a>b) a=a%b;
        else b=b%a;
    }
        if (a==0) cout<<b;
        else cout<<a;
    cout<<endl;
}

 int main (){
    int t,a,b;  
    cin >>t;
    while(t--){
    cin>>a>>b;
     gcd(a,b);
    }
    
 }