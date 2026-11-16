// enum Menu { AMERICANO = 1, LATTE, MOCHA };를 정의하고, 메뉴 번호와 수량을 입력받아 
// switch문으로 총 금액을 출력하세요. 가격은 아메리카노 3000원, 라떼 3500원, 모카 4000원입니다. 
// case에는 열거형 상수를 쓰고, 없는 메뉴 번호는 "없는 메뉴입니다"를 출력합니다.

// 메뉴 선택(1.아메리카노 2.라떼 3.모카): 2
// 수량: 3
// 라떼 3잔 - 총 10500원

#include <stdio.h>

enum Menu { AMERICANO = 1, LATTE, MOCHA };

int main(void) {
    int n, count;

    printf("메뉴 선택(1.아메리카노 2.라떼 3.모카): ");
    scanf("%d", &n);
    printf("수량: ");
    scanf("%d", &count);

    enum Menu menu = n;

    switch (menu) {
    case AMERICANO:
        printf("아메리카노 %d잔 - 총 %d원\n", count, 3000 * count);
        break;
    case LATTE:
        printf("라떼 %d잔 - 총 %d원\n", count, 3500 * count);
        break;
    case MOCHA:
        printf("모카 %d잔 - 총 %d원\n", count, 4000 * count);
        break;
    default:
        printf("없는 메뉴입니다\n");
    }
    return 0;
}