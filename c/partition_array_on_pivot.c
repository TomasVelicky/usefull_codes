int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    // Variables
    int* lesser = (int*)malloc(numsSize * sizeof(int));
    int* greater = (int*)malloc(numsSize * sizeof(int));
    int* result = (int*)malloc(numsSize * sizeof(int));

    // Indexes
    int g=0,l=0,e=0;
    // Get greater, lesser and equal to pivot
    for(int i=0;i<numsSize;i++) {
        if(nums[i] < pivot) {
            lesser[l++] = nums[i];
        } else if(nums[i] > pivot) {
            greater[g++] = nums[i];
        } else {
            e++;
        }
    }
    
    // Put lesser, equal, greater to array
    int index = 0;
    for(int i=0;i<l;i++) result[index++] = lesser[i];
    for(int i=0;i<e;i++) result[index++] = pivot;
    for(int i=0;i<g;i++) result[index++] = greater[i];

    *returnSize = numsSize;
    free(lesser); 
    free(greater);
    return result;
}
