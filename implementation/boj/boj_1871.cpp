#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int N;

    cin>>N;

    for(int i=0;i<N;i++){
        string s; 

        cin>>s; 

        int k=s.find('-');

        string a=s.substr(0,k);
        int b=stoi(s.substr(k+1)); //stoi()는 string을 int로 바꿈 

        int sum=0; 

        for(int j=0;j<a.length();j++){
            char c=a[j];
            sum+=(c-'A')*pow(26,a.length()-j-1);
        }

        if(abs(sum-b)<=100){
            cout<<"nice\n";
        }else{
            cout<<"not nice\n";
        }

    }
}