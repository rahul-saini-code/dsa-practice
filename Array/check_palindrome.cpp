//check given array is palindrome or not

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 1};

    int length = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = length - 1;
    int count = 0;

    while(start < end){
        if(arr[start] != arr[end]){
            cout << "Not palindrome";
        }
        start++;
        end--;
    }
    cout << "Palindrome";
    return 0;

}
