class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = arr[0];
        int index = 0;

        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] > max){
                max = arr[i];
                index = i;
            }
        }
        return index;
    }
};