#include<iostream>
using namespace std;


char toLowerCase(char ch){
    if(ch>='a' && ch<= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int palindrome(char name[],int len){
        int s = 0;
        int e = len-1;      
        while(toLowerCase(name[s]) == toLowerCase(name[e]) && s!=e){
            s++;
            e--;
        }
        if(s == e){
            return 1;
        }
        else{
            return 0;
        }
}

void revereString(char name[], int len) {
 int e = len-1;
 int i =0;
 while(i<e){
     swap(name[i++],name[e--]);

 }

}

int getLength(char name[]) {
    int count = 0;
    for (int i = 0;name[i] != '\0';i++) {
        count++;

    }
    return count;
}

int main() {

    char name[20];
    cin >> name;
    cout << name << endl;
    int len = getLength(name);
    cout << len << endl;
    // revereString(name, len);
    // cout << name << endl;
    if(palindrome(name,len)){
        cout<<"string is palindrome"<<endl;
    }else{
        cout<<"string is not palindrome"<<endl;
    }

    cout<<toLowerCase('b')<<endl;
    cout<<toLowerCase('C')<<endl;
    return 0;
}