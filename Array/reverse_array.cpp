//reverse array without  using extra array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 , 4 , 3 , 9 , 10};

    int length = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = length - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;

    }
    for(int i = 0 ; i < length ; i++){
        cout << arr[i] <<  endl;
    }
    return 0;
}
