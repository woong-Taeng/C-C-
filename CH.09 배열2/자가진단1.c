#include <stdio.h>

int main() {
    int cnt[26] = {0};
    char c;
    while (scanf(" %c", &c) == 1) {
        if (c < 'A' || c > 'Z') break;
        cnt[c - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) printf("%c : %d\n", 'A' + i, cnt[i]);
    }
    return 0;
}