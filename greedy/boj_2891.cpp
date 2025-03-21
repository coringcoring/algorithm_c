#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n,r,s;
    cin >> n >> r >> s;

    vector<int> arr(11,1);

    int temp;
    //고장난 카약 
    for(int i=0;i<r;i++){
        cin >> temp; 
        arr[temp]--; 
    }

    //여분 있는 카약 
    for(int i=0;i<s;i++){
        cin >> temp; 
        arr[temp]++; 
    }


    for(int i=1;i<=n;i++){
        if(arr[i]==2){
            if(i-1>=1 && arr[i-1]==0){
                arr[i-1]++;
                arr[i]--;
            }
            else if(i-1>=1 && arr[i+1]==0){
                arr[i+1]++;
                arr[i]--;
            }
        }
    }

    //카약의 개수가 0인 것들 세기 == 출전 못하는 팀 
    int result=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==0) result++;
    }

    cout<<result<<"\n";

    return 0; 
}