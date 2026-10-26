class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];

        int i = low;
        int j = high;

        while (true) {
            while (nums[i] < pivot) i++;
            while (nums[j] > pivot) j--;

            if (i >= j) return j;

            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int p = partition(nums, low, high);

            quickSort(nums, low, p);
            quickSort(nums, p + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};