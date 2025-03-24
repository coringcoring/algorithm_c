#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std; 

//참고: https://se-jung-h.tistory.com/entry/BOJC-%EB%B0%B1%EC%A4%80-16401-%EA%B3%BC%EC%9E%90-%EB%82%98%EB%88%A0%EC%A3%BC%EA%B8%B0 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m,n;
    cin >> m >> n; 

    vector<int> arr; 

    int tmp; 
    for(int i=0;i<n;i++){
        cin >> tmp; 
        arr.push_back(tmp);
    }

    int left=1; //최소 과자 길이 (인덱스가 아니다!)
    int right=*max_element(arr.begin(),arr.end()); //최대 과자 길이 (인덱스가 아니다!)
    int result=0; //조카에게 줄 수 있는 최대 과자 길이 


    while(left<=right){
        int mid=(left+right)/2;
        int count=0; 

        for(int i=0;i<n;i++){
            count+=arr[i]/mid; 
        }

        if(count>=m){//조카들에게 충분히 나눠줄 수 있다
            left=mid+1; //과자길이를 1 늘린다 
            result=mid; 
        }else{//조카들에게 나눠줄 수 없다 
            right=mid-1; 
        }
    }

    cout << result << "\n";

    return 0;
}