#include <iostream>
using namespace std;

int findMinIdx(int[], int);
int findMin(int[], int); //�Լ� �����

int main()
{
	//�ּҰ� ã��
	int arr[] = { 3, 8, 1, 6, 2 };
	int min; //�ּҰ�

	min = findMin(arr, size(arr));
	cout << "�ּҰ�: " << min << endl;

	//�ּҰ� ��ġ ã��
	int minIdx;
	minIdx = findMinIdx(arr, size(arr));
	cout << "�ּҰ��� ��ġ: " << minIdx << endl;

	//�ּҰ� ��ġ ã��

	return 0;
}

int findMin(int a[], int size) {
	int minVal = a[0]; //�ּҰ� ����
	for (int i = 1; i < size; i++) {
		if (a[i] < minVal)
			minVal = a[i];
	}

	return minVal;
}

//�ּҰ��� ��ġ ã�� �Լ� ����
int findMinIdx(int a[], int size) {
	int minIdx = 0; //0���� �ּҰ� ����
	for (int i = 1; i < size; i++) {
		if (a[i] < a[minIdx]) //��Ұ��� �ּҰ����� ������
			minIdx = i;		  //�ε����� �ּҰ����� ����
	}

	return minIdx;
}