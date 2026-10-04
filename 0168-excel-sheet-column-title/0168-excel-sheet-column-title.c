char* convertToTitle(int columnNumber) {
/* malloc required string size */    
    char * res = (char *) malloc(8);
    int index = 0;
/* separate each letter from column number by diving by 26 */
    while (columnNumber != 0){
        columnNumber--;
        res[index++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;   
    }
/* terminate str */
    res[index] = '\0';
/* reverse the string to get actual string */    
    for(int i =0, j=index-1 ; i < index/2; i++,j--){
        char temp = res[i];
        res[i] = res[j];
        res[j] = temp;
    }
/* return str */
    return res;
}