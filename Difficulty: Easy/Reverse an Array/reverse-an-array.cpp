class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        
        // 0 1 2 3 4 5
        // 1 4 3 2 6 5
        // 5 6 2 3 4 1
        int n = arr.size();
        for(int i=0; i<n/2; i++){
            int temp = arr[n-i-1];
            arr[n-i-1] = arr[i];
            arr[i] = temp;
        }
    }
};