#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h> //memset 

using namespace std;

struct comp {
    bool operator()(const pair<int, char>& a, const pair<int, char>& b) {
        return a.first > b.first;
    }
};

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int count[26]={0,}; 

    int t;
    cin>>t; 
    cin.ignore(); //getline() 전, 입력 버퍼 비움 

    for(int i=0;i<t;i++){
        memset(count,0,sizeof(count));
        
        string s;
        getline(cin,s);

        for(int j=0;j<s.length();j++){
            if(s[j] == ' ') continue;

            count[s[j]-'a']++; //a=97     
        }

        vector< pair<int,char> > vec;
        for(int j=0;j<26;j++){
            vec.push_back(make_pair(count[j],j+'a'));
        }

        sort(vec.begin(),vec.end(),comp());

        if(vec[0].first==vec[1].first){
            cout<<"?"<<"\n";
        }else{
            cout<<vec[0].second<<"\n";
        }

    }

    return 0; 
}