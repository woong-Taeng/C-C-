//다음 코드에서 (가)~(라) 중 오류가 나는 줄을 모두 고르고 이유를 쓰세요. 또 (마)의 출력 결과를 쓰세요.

#include <stdio.h>
#include <string.h>

int main(void) {
    char *p = "Hello";
    char a[] = "Hello";

    p[0] = 'J';     // (가)
    a[0] = 'J';     // (나)
    p = "World";    // (다)
    a = "World";    // (라)

    printf("%d %d\n", (int)sizeof(a), (int)strlen(a));  // (마)
    return 0;
}

// 오류: (가), (라), (마) = 6 5

// (가) p[0] = 'J'; p는 읽기 전용 메모리 영역에 있는 문자열 상수 “Hello”를 가리키므로 내용을 수정할 수 없습니다.
// (나) a[0] = 'J'; 정상.
// (다) p = "World"; 정상.
// (라) a = "World"; 컴파일 오류.