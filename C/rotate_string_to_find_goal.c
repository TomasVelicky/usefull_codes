bool rotateString(char* s, char* goal) {
    int len = strlen(s);
    
    // If lengths differ, it's impossible.
    if (len != strlen(goal))
        return false;
    
    // If both strings are empty, return true.
    if (len == 0)
        return true;
    
    // Create a new string that is s concatenated with itself.
    char* doubleS = malloc(2 * len + 1);
    strcpy(doubleS, s);
    strcat(doubleS, s);

    // Check if goal is a substring of the concatenated string.
    bool result = (strstr(doubleS, goal) != NULL);
    
    free(doubleS);
    return result;
}
