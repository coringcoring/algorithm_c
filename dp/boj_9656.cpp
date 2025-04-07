#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int dp[1001]; 

    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;

    //dp[n]은 n개의 돌일때 게임의 횟수
    //값이 홀수인 경우 창이 이기고, 짝수인 경우 상이 이김 
    for(int i=4;i<=n;i++){
        dp[i]=min(dp[i-1]+1, dp[i-3]+1);
    }

    if(dp[n]%2==0){
        cout << "SK";
    }else{
        cout << "CY";
    }

    return 0; 
}