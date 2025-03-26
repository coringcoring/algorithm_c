#include <iostream>
#include <string> 

using namespace std;

long long cal(int n){
    long long k=1;
    for(int i=0;i<n;i++){
        k*=8;         
    }
    return k; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    string s;
    while(true){
        cin >> s; 

        if (s == "#") break; 

        long long res=0; 

        for(int i=0;i<s.length();i++){
            if(s[i]=='-'){
                res+=0;
            }
            else if(s[i]=='\\'){
                res+=cal(s.length()-(i+1));
            }else if(s[i]=='('){
                res+=2*cal(s.length()-(i+1));
            }else if(s[i]=='@'){
                res+=3*cal(s.length()-(i+1));
            }else if(s[i]=='?'){
                res+=4*cal(s.length()-(i+1));
            }else if(s[i]=='>'){
                res+=5*cal(s.length()-(i+1));
            }else if(s[i]=='&'){
                res+=6*cal(s.length()-(i+1));
            }else if(s[i]=='%'){
                res+=7*cal(s.length()-(i+1));
            }else if(s[i]=='/'){
                res+=-1*cal(s.length()-(i+1));
            }
        }

        cout<< res << "\n";
    }

    return 0;
}