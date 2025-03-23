#include <iostream>
#include <vector> 
#include <queue>

using namespace std;

vector<int> arr[502];

void bfs(int start, vector<int>& visit, int& count){
    queue<int> q; 
    visit[start]=1; 

    q.push(start);
    
    while(!q.empty()){
        int cur=q.front();
        q.pop();

        for(int i=0;i<arr[cur].size();i++){
            int nxt=arr[cur][i];
            if(visit[nxt]==0){
                visit[nxt]=visit[cur]+1; 
                if(visit[nxt]<=3){
                    count++;
                    q.push(nxt);
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m; 
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v; 

        arr[u].push_back(v);
        arr[v].push_back(u);

    }
    
    vector<int> visit(n+1,0);
    int count=0; 

    bfs(1, visit, count);

    cout<<count<<"\n";

    return 0; 
}