//Check whether element exists or not
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10 , 20 , 30 , 40 , 50};
    int target = 25 ;
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for(int i = 0 ; i < length ; i++){
        if(arr[i] == target){
            cout << "Element found ";
            count++;
            break;
        }
    }
    if(count == 0){
        cout << " Element not found";
    }
    return 0;
}
