#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;

    string s; 

    for(int i=0;i<t;i++){
        cin>>s;

        for(int j=0;j<s.length();j++){
            if(isupper(s[j])){
                s[j]=tolower(s[j]);
            }
        }

        cout<<s<<'\n';
    }
}