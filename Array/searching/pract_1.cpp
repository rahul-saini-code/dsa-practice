//Given an array, find the index of a target element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8,9 , 2, 1};
    int target = 9 ;
    int length = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;
    
    for(int i = 0 ; i < length ; i++){
        if(arr[i] == target){
            cout << "Element found at index : " << i;
            flag++;
            break;
        }
    }
    if(flag == 0){
        cout << "Element not found";
    }
    return 0;
}
