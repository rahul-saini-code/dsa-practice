/*Given an array of integers, find the maximum element in the array.
arr = [3, 7, 2, 9, 4]*/

#include<iostream>
using namespace std;

int main(){
int arr[] = {3 , 7 , 2 , 9 , 4};

//cout << arr[0] <<endl;

int max = arr[0];
int length = sizeof(arr) / sizeof(arr[0]);

for(int i = 1 ; i < length ; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
cout << "Max element in this array is " << max << endl;
return 0;
}
