#include <iostream>
#include <string>

using namespace std;

int main(){
    bool isFind=false; 

    for(int i=0;i<5;i++){
        string s;

        cin>>s;

        if(s.find("FBI")!=string::npos){
            isFind=true; 
            cout<<(i+1)<<" ";
        }
    }

    if(!isFind){
        cout<<"HE GOT AWAY!"; 
    }
}