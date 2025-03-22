#include <iostream>
#include <string>
#include <algorithm> //sort() 추가 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; 
    cin >> s; 

    string arr[s.length()];

    for(int i=0;i<s.length();i++){
        arr[i]=s.substr(i,s.length());
    }

    //배열의 시작점 주소 arr에서 마지막 주소인 arr+length까지 오름차순으로 정렬 
    sort(arr,arr+s.length());

    for(int i=0;i<s.length();i++){
        cout << arr[i] << "\n"; 
    }

    return 0; 
}