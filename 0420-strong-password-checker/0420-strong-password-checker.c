#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int strongPasswordChecker(char* password) {
    int n = strlen(password);
    int hasLower = 0, hasUpper = 0, hasDigit = 0;
    int replace = 0, oneSeq = 0, twoSeq = 0;

    for (int i = 0; i < n; ) {
        if (islower(password[i])) hasLower = 1;
        if (isupper(password[i])) hasUpper = 1;
        if (isdigit(password[i])) hasDigit = 1;

        int j = i;
        while (i < n && password[i] == password[j]) i++;

        int len = i - j;
        if (len >= 3) {
            replace += len / 3;
            if (len % 3 == 0) oneSeq++;
            else if (len % 3 == 1) twoSeq++;
        }
    }

    int missingTypes = 3 - (hasLower + hasUpper + hasDigit);

    if (n < 6) {
        return fmax(missingTypes, 6 - n);
    } else if (n <= 20) {
        return fmax(missingTypes, replace);
    } else {
        int excess = n - 20;

        if (excess > 0) {
            int reduceOne = fmin(excess, oneSeq);
            replace -= reduceOne;
            excess -= reduceOne;

            int reduceTwo = fmin(excess, 2 * twoSeq) / 2;
            replace -= reduceTwo;
            excess -= reduceTwo * 2;

            int reduceThree = excess / 3;
            replace -= reduceThree;
        }

        return (n - 20) + fmax(missingTypes, replace);
    }
}