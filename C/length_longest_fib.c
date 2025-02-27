int lenLongestFibSubseq(int* arr, int arrSize) {
    if(arrSize < 3) return 0;

    int dp[arrSize][arrSize];
    memset(dp, 0, sizeof(dp));
    int maxLen = 0;

    for(int index=2;index<arrSize;index++) {
        int first = 0, second = index - 1;
        while(first < second) {
            int sum = arr[first] + arr[second];
            if(sum > arr[index]) second -= 1;
            else if(sum < arr[index]) first += 1;
            else { 
                dp[second][index] = dp[first][second] + 1;
                if(dp[second][index] > maxLen) maxLen = dp[second][index];
                second -= 1;
                first += 1;
            }
        }
    }

    return maxLen == 0 ? 0 : maxLen + 2;
}
