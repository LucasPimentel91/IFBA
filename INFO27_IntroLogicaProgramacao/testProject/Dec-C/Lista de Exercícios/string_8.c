#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];
    int result = 0;

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
                result = max(result, L[i][j]);
            } else
                L[i][j] = 0;
        }
    }
    return result;
}

int main() {
    char str1[51], str2[51];

    while (1) {
        if (gets(str1) == NULL)
            break;

        gets(str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        // Remover o caractere de nova linha '\n' das strings
        if (len1 > 0 && str1[len1 - 1] == '\n')
            str1[len1 - 1] = '\0';

        if (len2 > 0 && str2[len2 - 1] == '\n')
            str2[len2 - 1] = '\0';

        int result = lcs(str1, str2, strlen(str1), strlen(str2));

        printf("%d\n", result);
    }

    return 0;
}
