#include<bits/stdc++.h>
using namespace std;
int main (){
    vector <string> words ;
    string word;
    while(cin>>word){
        words.push_back(word);
    }
    vector<string> new_word(words.size()+1);
    for (int i=0;i<words.size();i++){
        int last = words[i].size()-1;
        int pos = words[i][last] -'0';
        new_word[pos] = words[i].substr(0,last);
    }
    for (int i=1;i<new_word.size();i++){
        cout<<new_word[i]<<" ";
    }
}