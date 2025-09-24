class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        //  0  1  2  3  4  5  6
        // 10 20 20 30 30 30 30
        
        int res = 0;
        for(int i=1;i<arr.size(); i++){
            if(arr[i] != arr[res]){
                res++;
                arr[res] = arr[i];
            }
        }
        
        // return array till the unique elements
        return vector<int>(arr.begin(), arr.begin() + res + 1);
    }
};