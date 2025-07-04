#include <iostream>
using namespace std;

int findMinIdx(int[], int);
int findMin(int[], int); //함수 선언부

int main()
{
	//최소값 찾기
	int arr[] = { 3, 8, 1, 6, 2 };
	int min; //최소값

	min = findMin(arr, size(arr));
	cout << "최소값: " << min << endl;

	//최소값 위치 찾기
	int minIdx;
	minIdx = findMinIdx(arr, size(arr));
	cout << "최소값의 위치: " << minIdx << endl;

	//최소값 위치 찾기

	return 0;
}

int findMin(int a[], int size) {
	int minVal = a[0]; //최소값 설정
	for (int i = 1; i < size; i++) {
		if (a[i] < minVal)
			minVal = a[i];
	}

	return minVal;
}

//최소값의 위치 찾기 함수 정의
int findMinIdx(int a[], int size) {
	int minIdx = 0; //0번을 최소값 설정
	for (int i = 1; i < size; i++) {
		if (a[i] < a[minIdx]) //요소값이 최소값보다 작으면
			minIdx = i;		  //인덱스를 최소값으로 설정
	}

	return minIdx;
}