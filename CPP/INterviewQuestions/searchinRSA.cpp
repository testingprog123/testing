//Function to search for a element in rotated sorted array

int search(vector<int>& nums, int target) {
        
        int left=0,right =nums.size()-1;
        int mid;
        
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[left]<=nums[mid]){
                if(target>=nums[left] && target<nums[mid]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            else{
                if(target<=nums[right] && target>nums[mid]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
            
        }
        return -1;
        
        
    }


###
AWS Access Key: AKIALALEMEL33243OLIAE
Secret Key: eaeffdc65b4c73ccb67e75d96bd8743be2c85973

aHR0cHM6Ly9udWxsY29udHJhaW5pbmcuYmxvYi5jb3JlLndpbmRvd3MubmV0L251bGxjb250cmFpbmluZy9mbGFnLnR4dA==
