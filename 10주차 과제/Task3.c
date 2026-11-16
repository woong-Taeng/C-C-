// (가)~(마) 중 오류가 나는 줄을 모두 고르시오.

#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(void) {
    struct Student s1 = {"Kim", 1001, 3.5};
    struct Student s2;
    struct Student *p = &s1;

    s2 = s1;             // (가)
    s2.name = "Lee";     // (나)
    p.id = 1002;         // (다)
    (*p).score = 4.0;    // (라)
    *p.score = 4.5;      // (마)
    return 0;
}

// 오류: (나), (다), (마)

// (나) s2.name = "Lee"; 오류. name은 배열이고 배열명에는 대입할 수 없습니다.
// (다) p.id = 1002; 오류. p는 포인터라서 . 연산자를 쓸 수 없습니다.
// (마) *p.score = 4.5; 오류. .이 *보다 우선순위가 높아서 *(p.score)로 해석됩니다.