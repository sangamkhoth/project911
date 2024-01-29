#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,3,5,6,7,5};
    int n=6;
    int target = 5;
    bool flag = false;
    for(int i=0; i<n ;i++){
        if(arr[i] == target){
            cout<<"First occurance is "<<i<<endl;
            flag = true;
            break;
        }
    }
    for(int i=n; i>=0; i--){
        if(arr[i] == target){
            cout<<"Last occurance is "<<i<<endl;
            flag = true;
            break;
        }
    }
    if(flag ==false) cout<<"Target not present in array"<<endl;

    return 0;
}
