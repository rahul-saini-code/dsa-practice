//Count how many times target appears
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int target = 2 ;
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for(int i = 0 ; i < length ; i++){
        if(arr[i] == target){
            count++;
        }
    }
    if(count == 0){
        cout << "Element not found";
    } else {
        cout << "Element found "<< count << " times";
    }
    return 0;
}
