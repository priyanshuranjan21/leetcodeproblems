int* numberOfLines(int* widths, int widthsSize, char* s, int* returnSize) {
    
    int* result = (int*)malloc(2 * sizeof(int));
    
    int lines = 1; 
    int currentWidth = 0; 
    for (int i = 0; i < strlen(s); i++) {
        int charWidth = widths[s[i] - 'a']; 
        if (currentWidth + charWidth > 100) {
            lines++; 
            currentWidth = charWidth; 
        } else {
            currentWidth += charWidth;
        }
    }
    result[0] = lines; 
    result[1] = currentWidth; 
    
    *returnSize = 2;
    return result; 
}