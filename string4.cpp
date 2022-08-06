#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    // string str = "HRITHIK";
    // for(int i=0;i<str.size();i++){
    //   if(str[i] >= 'A' && str[i] <= 'Z'){
    //       str[i] += 32;
    //   }
    // }
    // cout<<str;

    // string str = "1927426";
    // sort(str.begin(), str.end(), greater<int>());
    // cout<<str;

    string str = "zadafabbccedddd";

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<str.size();i++){
        freq[ str[i] - 'a']++;
    }

    char ans= 'a';
    int max = 0;
    for(int i=0;i<26;i++){
        if(freq[i] > max){
            max = freq[i];
            ans = i + 'a';
        }
    }

    cout<<max<<" "<<ans;
    
    return 0;
}