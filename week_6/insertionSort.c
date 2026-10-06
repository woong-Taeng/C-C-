#include <stdio.h>   // printf 사용을 위한 표준 입출력 헤더

// 삽입 정렬 함수: 배열 arr를 오름차순으로 정렬
// arr: 정렬할 배열, n: 배열의 원소 개수
void insertionSort(int arr[], int n) {
    // 첫 번째 원소는 이미 정렬된 상태로 보고, 두 번째 원소(i = 1)부터 시작
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // 이번에 끼워 넣을 값을 따로 저장
        int j = i - 1;      // key의 바로 왼쪽부터 비교 시작

        // 왼쪽(정렬된 구간)에서 key보다 큰 값들을 한 칸씩 오른쪽으로 밀어냄
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // 큰 값을 오른쪽으로 한 칸 이동
            j--;                   // 한 칸 더 왼쪽으로 이동해서 비교
        }

        // 밀어내기가 끝난 빈자리에 key를 삽입
        arr[j + 1] = key;
    }
}

int main(void) {
    int arr[] = {64, 25, 12, 22, 11};        // 정렬할 배열
    int n = sizeof(arr) / sizeof(arr[0]);    // 배열 전체 크기 ÷ 원소 하나 크기 = 원소 개수

    insertionSort(arr, n);   // 배열 정렬 (배열은 주소로 전달되므로 원본이 바뀜)

    // 정렬된 배열 출력
    printf("정렬 결과: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;   // 프로그램 정상 종료
}