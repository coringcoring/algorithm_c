#include <iostream>
#include <vector>

using namespace std;

int n;
int w[10][10];
bool visit[11]={false,};
int result=1e9; 

void dfs(int start,int cur, int count, int sum){
    if(count==n){
        if(w[cur][start]==0) return; //출발 마을로 돌아올 수 없다면 무효한 루트
        if(result>sum+w[cur][start]){
            result=sum+w[cur][start];
        }
        return; 
    }

    for(int i=0;i<n;i++){
        if(!visit[i] && w[cur][i]!=0){
            visit[i]=true;
            dfs(start,i,count+1,sum+w[cur][i]);
            visit[i]=false; 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n; 

    int temp; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> temp;
            w[i][j]=temp; 
        }
    }

    for(int i=0;i<n;i++){
        visit[i]=true;
        dfs(i,i,1,0);
        visit[i]=false; 
    }

    cout << result << "\n";
    return 0; 
}

