#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int player1=0;
        int player2=0; 

        for(int j=0;j<n;j++){
            char a;
            char b;
            cin>>a>>b; 

            if(a=='R'){
                if(b=='S'){
                    player1++;    
                }else if(b=='P'){
                    player2++;
                }else{
                    player1++;
                    player2++;
                }
            }
            else if(a=='S'){
                if(b=='R'){
                    player2++;
                }else if(b=='S'){
                    player1++;
                    player2++;
                }else{
                    player1++;
                }
            }
            else if(a=='P'){
                if(b=='R'){
                    player1++;
                }else if(b=='S'){
                    player2++;
                }else{
                    player1++;
                    player2++;
                }
            }
        }


        if(player1>player2){
            cout<<"Player 1"<<"\n";
        }else if(player2>player1){
            cout<<"Player 2"<<"\n";
        }else{
            cout<<"TIE"<<"\n";
        }
    }
}