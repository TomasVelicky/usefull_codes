bool isNumberPalindrome(int x) {
    if(x < 0) return false;
    if(x == 0) return true;
    int original = x;
    long int reverse = 0;
    while(x != 0){
        reverse = (reverse * 10) + (x % 10);
        x /= 10;
    }
    if(original != reverse) return false;
    return true;
}