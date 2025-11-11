class Solution {
  public:
    void quickSort(vector<int>& arr, int si, int ei) {
        // code here
        if(si>=ei) return;
        int pi = partition(arr,si,ei);
        quickSort(arr,si,pi-1);
        quickSort(arr,pi+1,ei);
    }

  public:
    int partition(vector<int>& arr, int si, int ei) {
        int pivotElement = arr[si];
        int count = 0;
        for(int i = si+1;i<=ei;i++){
            if(arr[i]<=pivotElement) count++;
        }
        int pivotIndex = si+count;
        swap(arr[si],arr[pivotIndex]);
        int i = si;
        int j = ei;
        while(i<pivotIndex&&j>pivotIndex){
            if(arr[i]<=pivotElement) i++;
            if(arr[j]>pivotElement) j--;
            else if(arr[i]>pivotElement&&arr[j]<=pivotElement){ 
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        return pivotIndex;
        // code here
    }
};