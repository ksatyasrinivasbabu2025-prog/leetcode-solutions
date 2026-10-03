char* intToRoman(int num) {
    char* String = malloc(20 * sizeof(char));
    int index = 0;
    while (num != 0) {
        if (num >= 1000) {
            String[index++] = 'M';
            num -= 1000;
        } else if (num >= 900) {
            String[index++] = 'C';
            String[index++] = 'M';
            num -= 900;
        } else if (num >= 500) {
            String[index++] = 'D';
            num -= 500;
        } else if (num >= 400) {
            String[index++] = 'C';
            String[index++] = 'D';
            num -= 400;
        } else if (num >= 100) {
            String[index++] = 'C';
            num -= 100;
        } else if (num >= 90) {
            String[index++] = 'X';
            String[index++] = 'C';
            num -= 90;
        } else if (num >= 50) {
            String[index++] = 'L';
            num -= 50;
        } else if (num >= 40) {
            String[index++] = 'X';
            String[index++] = 'L';
            num -= 40;
        } else if (num >= 10) {
            String[index++] = 'X';
            num -= 10;
        } else if (num >= 9) {
            String[index++] = 'I';
            String[index++] = 'X';
            num -= 9;
        } else if (num >= 5) {
            String[index++] = 'V';
            num -= 5;
        } else if (num >= 4) {
            String[index++] = 'I';
            String[index++] = 'V';
            num -= 4;
        } else {
            String[index++] = 'I';
            num -= 1;
        }
    }
    String[index] = '\0';
    return String;
}