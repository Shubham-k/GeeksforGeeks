class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        
        // 0 1 2 3 4 5
        // 0 0 0 3 1 4
        
        int latestIndexOfZero = -1;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 0){
                if(latestIndexOfZero == -1){
                    latestIndexOfZero = i;
                }
            }
            else{
                if(latestIndexOfZero > -1){
                    swap(arr[i], arr[latestIndexOfZero]);
                    latestIndexOfZero++;
                }
            }
        }
    }
};