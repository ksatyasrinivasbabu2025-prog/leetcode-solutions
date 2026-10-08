int numJewelsInStones(char *j, char *s) {
    int gems[256] = {0};
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        gems[(unsigned char)s[i]]++;
    }

    for (int i = 0; j[i] != '\0'; i++) {
        if (strchr(s, j[i]) != NULL) {
            sum += gems[(unsigned char)j[i]];
        }
    }

    return sum;
}