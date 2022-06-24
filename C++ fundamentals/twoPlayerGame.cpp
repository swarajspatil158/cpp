#include <bits/stdc++.h>
using namespace std;
int main() {

    srand(time(NULL));
    int t = 5;
    int w1=0,w2=0;
    while(t--){
        cout<<"Score: "<<"Player1: "<<w1<<" "<<"Player2: "<<w2<<'\n';
        cout<<"------------------------------------------"<<'\n';
        cout<<"round "<<abs(t-5)<<'\n';
        if(w1>=3 ){

            break;
        }
        if(w2>=3){

            break;
        }
        int p1 =100,p2=100;
        while(p1>0 && p2>0){

            p1=p1-rand() % 5 + 1;
            p2=p2-rand() % 5 + 1;
        }
        if(p1>0){
            w1++;
        
        }
        if(p2>0){
            w2++;
        }
    }

        cout<<"----------------------=-------------------"<<'\n';
        cout<<"----------------------=-------------------"<<'\n';
        cout<<"----------------------=-------------------"<<'\n';

    cout<<"Score: "<<"Player 1: "<<w1<<" "<<"Player 2: "<<w2<<'\n';
    if(w1 > w2)
            cout<<"Player 1 Wins"<< '\n';
    else if(w2 > w1)
            cout<<"Player 2 Wins"<< '\n';
    else if(w1 == w2){
        cout<<"Tie"<<'\n';
    }
    return 0;
}
