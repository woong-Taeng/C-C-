#include <stdio.h>   // printf 사용을 위한 표준 입출력 헤더

// 선택 정렬 함수: 배열 arr를 오름차순으로 정렬
// arr: 정렬할 배열, n: 배열의 원소 개수
void selectionSort(int arr[], int n) {
    // i는 "이번에 채울 자리"의 위치
    // 마지막 원소는 자동으로 정렬되므로 n - 1번까지만 반복
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;   // 일단 i번째 값을 최솟값이라고 가정

        // i 다음 위치부터 끝까지 돌면서 더 작은 값을 찾음
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])   // 지금까지의 최솟값보다 작으면
                minIdx = j;             // 최솟값 위치를 갱신
        }

        // 찾은 최솟값을 i번째 자리와 교환 (temp를 이용한 swap)
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main(void) {
    int arr[] = {64, 25, 12, 22, 11};        // 정렬할 배열
    int n = sizeof(arr) / sizeof(arr[0]);    // 배열 전체 크기 ÷ 원소 하나 크기 = 원소 개수

    selectionSort(arr, n);   // 배열 정렬 (배열은 주소로 전달되므로 원본이 바뀜)

    // 정렬된 배열 출력
    printf("정렬 결과: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;   // 프로그램 정상 종료
}
