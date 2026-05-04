//Find last occurrence index of target
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 9};
    int target = 2 ;
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for(int i = length -1 ; i >= 0 ; i--){
        if(arr[i] == target){
            cout << i;
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "Element not found";
    } 
    return 0;
}
