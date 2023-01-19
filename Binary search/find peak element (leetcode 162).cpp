
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int l=0, r= n-1;
        int mid;
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid]<nums[mid+1]){
                l=mid+1;

            } else {
                r=mid;
            }
        }
        return l;
    }
};