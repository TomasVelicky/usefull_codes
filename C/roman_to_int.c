int value(char r) {
    if (r == 'I' || r == 'i')
        return 1;
    if (r == 'V' || r == 'v')
        return 5;
    if (r == 'X' || r == 'x')
        return 10;
    if (r == 'L' || r == 'l')
        return 50;
    if (r == 'C' || r == 'c')
        return 100;
    if (r == 'D' || r == 'd')
        return 500;
    if (r == 'M' || r == 'm')
        return 1000;
    return -1;
}

int romanToInt(char* s) {
    int number;
    for(int i=0;i<strlen(s);i++){
        int value_symbol = value(s[i]);
        if( value_symbol < value(s[i+1]) ) number -= value_symbol;
        else number += value_symbol;
    }
    return number;
}