class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int j = 0;
        for(int i = k;i<arr.size(); i++){
            if(x-arr[j] > arr[i] - x){
                j++;
            }else{
                break;
            }
        }
        return vector<int>(arr.begin() +j, arr.begin() +j +k);
    }
};