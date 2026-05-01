/*Given an array of integers, find the second largest element in the array
arr = [3, 7, 2, 9, 4]*/

#include<iostream>
using namespace std;

int main(){
int arr[] = {3 , 7 , 2 , 9 , 4};

int largest = arr[0];
int secondLargest = INT_MIN;
int length = sizeof(arr) / sizeof(arr[0]);;

for(int i = 1 ; i < length ; i++){
    if(largest < arr[i]){
        secondLargest = largest;
        largest = arr[i];
    } else if (secondLargest < arr[i] && largest > arr[i]){
        secondLargest = arr[i];
    }
}
cout << "Largest element in this array is " << largest << endl;
cout << "Second Largest element in this array is " << secondLargest << endl;
return 0;
}
