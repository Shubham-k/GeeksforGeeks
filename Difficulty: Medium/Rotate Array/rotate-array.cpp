class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void reverseArr(vector<int>& arr, int low, int high){
        while(low<high){
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        int numberOfRotation = d%n;
        reverseArr(arr, 0, numberOfRotation-1);
        reverseArr(arr, numberOfRotation, n-1);
        reverseArr(arr, 0, n-1);
    }
};