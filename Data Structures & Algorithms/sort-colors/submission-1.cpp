class Solution {
private:
    void mergeSort(vector<int>& nums, int left, int right){
        if (left >= right) return;
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
    void merge(vector<int>& nums, int left, int mid, int right){
        int n1 = mid - left + 1;
        int n2 = right - (mid + 1) + 1;
        int i,j;
        vector<int> L(n1), R(n2);
        for (int i = 0; i < n1; i++){
            L[i] = nums[left + i];
        }
        for (int j = 0; j < n2; j++){
            R[j] = nums[mid + 1 + j];
        }
        int k = left;
        i = 0;
        j = 0;
        while(i < n1 && j < n2){
            if (L[i] < R[j]){
                nums[k] = L[i];
                i++;
            }else{
                nums[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1){
            nums[k] = L[i];
            i++;
            k++;
        }
        while(j < n2){
            nums[k] = R[j];
            j++;
            k++;
        }

    }
public:
    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
    }
};