int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int counter = 0, max = 0;
    for(int i=0;i< numsSize;i++){
        if(nums[i] == 1) {
            counter += 1;
            if(counter > max) max = counter;
        }
        else { counter = 0; }
    }
    return max;
}
