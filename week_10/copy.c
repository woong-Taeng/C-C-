#pragma warning(disable:4996)   // Visual Studio에서 strcpy 등 보안 경고(C4996) 무시
#include <stdio.h>
#include <string.h>             // strlen, strcpy, strncpy 등 문자열 함수 사용

int main()
{
    char str1[20] = "Back";     // 문자열 "Back" + 끝에 '\0' 자동 저장
    char str2[20] = "Space";
    char str3[20];              // 복사 결과를 담을 배열 (초기화 안 됨)
    char ch = 'p';             
    int n = 3;                  // strncpy로 복사할 문자 수

    // strlen: '\0' 앞까지의 문자 개수를 반환 → "Back"은 4
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // strcpy(대상, 원본): '\0'까지 통째로 복사
    // 대상 배열(str3)이 원본보다 충분히 커야 함
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // strncpy(대상, 원본, n): 원본에서 최대 n개 문자만 복사
    // n개만 복사할 경우 '\0'을 자동으로 붙여주지 않음
    strncpy(str3, str2, n);
    str3[n] = '\0';             // 직접 문자열 끝 표시 → 결과는 "Spa"
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    return 0;
}