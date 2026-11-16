//enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };을 정의하고, 
//1~7 사이의 숫자를 입력받아 switch문으로 요일 이름과 평일/주말 여부를 출력하세요. 
//case에는 숫자 대신 열거형 상수를 쓰고, 범위를 벗어난 입력은 "잘못된 입력"을 출력합니다.

//요일 번호 입력(1~7): 6
//토요일 - 주말입니다.

#include <stdio.h>

enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

int main(void) {
    int n;
    printf("요일 번호 입력(1~7): ");
    scanf("%d", &n);

    enum Day day = n;

    switch (day) {
    case MON: printf("월요일 - 평일입니다.\n"); break;
    case TUE: printf("화요일 - 평일입니다.\n"); break;
    case WED: printf("수요일 - 평일입니다.\n"); break;
    case THU: printf("목요일 - 평일입니다.\n"); break;
    case FRI: printf("금요일 - 평일입니다.\n"); break;
    case SAT: printf("토요일 - 주말입니다.\n"); break;
    case SUN: printf("일요일 - 주말입니다.\n"); break;
    default:  printf("잘못된 입력\n");
    }
    return 0;
}