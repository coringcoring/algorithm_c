#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int k;
        int sum=0; 

        cin >> k; 
        
        for(int j=1;j<=k;j++){
            if(j%2!=0){
                sum+=j; 
            }
        }
        cout << sum << "\n";
    }

    return 0;
}