#include <bits/stdc++.h>
using namespace std;

string unique(string str){
    set<string>st;
    string word = "";
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            st.insert(word);
            word = "";
        }
        else{
            word +=str[i];
        }
    }
    string res = "";
    for(auto it:st){
        res+=it+" ";
    }
    return res;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);std::cout.tie(NULL);
    
    string str = "Geeks for Geeks";
    string result = unique(str);
    cout<<result;
    return 0;
}