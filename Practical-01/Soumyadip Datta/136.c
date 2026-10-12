int singleNumber(int* nums, int numsSize) {
    int i,resolution=0;
    for(i=0;i<numsSize;i++){
        resolution^=nums[i];
            }
    return resolution;
}
    
