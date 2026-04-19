#include <iostream>
#include <string> 

using namespace std; 

int main(){
    int a,b,c,d;
    cin>> a >> b >> c >> d;

    string num1=to_string(a)+to_string(b);
    string num2=to_string(c)+to_string(d); 

    long long answer=stoll(num1)+stoll(num2); 

    cout<<answer<<"\n";

    return 0; 
}