class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums);
        return nums;
    }

    void heapify(vector<int>& arr, int n, int i){
        int target = i;
        int l = 2*i + 1;
        int r = 2*i + 2;

        if(l < n && arr[l] > arr[target]){
            target = l;
        }

        if(r < n && arr[r] > arr[target]){
            target = r;
        }

        if(target != i){
            swap(arr[target], arr[i]);
            heapify(arr, n, target);
        }
    }

    void heapSort(vector<int>& arr){
        int n = arr.size();
        for(int i = n/2 - 1; i>=0; i--){
            heapify(arr, n, i);
        }

        for(int i = n-1; i >= 0; i--){
            swap(arr[0], arr[i]);
            heapify(arr,i,0);
        }
    }
};