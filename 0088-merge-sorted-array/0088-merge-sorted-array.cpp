class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Pointers for the end of the valid elements in nums1 and nums2
        int p1 = m - 1;
        int p2 = n - 1;
        // Pointer for the end of the total merged array
        int p = m + n - 1;
        
        // Iterate backwards until nums2 is fully merged
        while (p2 >= 0) {
            // If nums1 has elements left and the current element is larger
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } 
            // Otherwise, nums2's element is larger (or nums1 is exhausted)
            else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
    }
};