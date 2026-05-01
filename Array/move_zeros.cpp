//move zeros to end using two pointers

#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 3, 0 , 12};

    int length = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for(int i = 0 ; i < length ; i++){
        if(arr[i] != 0){
            if(i != j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    for (int i = 0 ; i < length ; i++){
            cout << arr[i] << " ";
    }


    return 0;

}
