class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = INT_MIN;
        int secondMax = -1;
        for(int i=0;i<arr.size(); i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        
        for(int i=0;i<arr.size(); i++){
            if(arr[i]!= max && arr[i] > secondMax){
                secondMax = arr[i];
            }
        }
        
        return secondMax;
    }
};