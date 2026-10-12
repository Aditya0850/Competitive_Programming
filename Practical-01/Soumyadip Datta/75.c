void sortColors(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize-i-1;j++){
            if(nums[j]>nums[j+1]){
                int t= nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=t;
            }
        }
    }
}