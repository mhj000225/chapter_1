#include <iostream>
using namespace std;

void input(int arr[], int siae); // input 함수 선언
int ADD(int arr[], int aize); // ADD 함수 선언
double AVG(int add, int size); // AVG 함수 선언
int ASCsort(int arr[], int size); // ASCsort 함수 선언
int DESCsort(int* arr, int size); // DESsort 함수 선언 (포인터 사용)

int main()
{
// 필수 기능
// 1 : 사용자로부터 5개의 숫자를 입력 받아 배열에 저장하고 이들의 합계와 평균을 계산해서 출력
// 2 : 5개의 숫자를 입력 받은 공간은 배열을 활용
// 3 : 합과 평균을 구하는 동작은 main합수에 한번에 작성하지 말고 각각 함수를 구현해주는 것으로

//도전 기능
// 1 정렬은 오름차순 정렬과 내림차순 정렬ㄹ이 가능해야된다
// 2 : 숫자 1을 입력 받으면 오름차순 정렬, 숫자 2를 입력 받으면 내림차순 정렬을 하도록 구현
// 3 : algorithm 헤더의 sort 함수를 사용하지 않고 직접 구현
// 4 : 오름차순 정렬과 내림차순 정렬 동작을 각각 함수로 구현



	const int size = 5; // 입력받을 숫자의 갯수를 상수로 선언
	int arr[size]; // 크기가 5인 배열 arr 선언
	int sort; // 오름차순, 내림차순 선택 변수

	input(arr, size); // input 함수 호출

	while (1) { // 오름차순, 내림차순 선택 반복문
		cout << "오름차순 정렬을 원하면 1, 내림차순 정렬을 원하면 2을 입력: ";
		cin >> sort;
		if (sort == 1) {
			ASCsort(arr, size);
			break;
		}
		else if (sort == 2) {
			DESCsort(arr, size);
			break;
		}
		else cout << "잘못된 입력입니다." << endl; // 1, 2 이외 다른숫자 입력시 재입력 (여기서 무환으로 반복되는 오류발생)
	}

	int add = ADD(arr, size);
	double avg = AVG(add, size);

	cout << "배열의 총합 : " << add << endl;
	cout << "배열의 평균 : " << avg << endl;
	return 0;
}

void input(int arr[], int size) {
	cout << "총 " << size << "개의 숫자를 입력하세요." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "번째 숫자를 입력하세요: ";
		cin >> arr[i];
		cout << arr[i] << "가 입력되었습니다." << endl;
	}
	cout << endl << "입력된 배열 : ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
}

int ASCsort(int arr[], int size) { // 오름차순 정렬 함수
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl << "오름차순으로 정렬된 배열: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
	return arr[5];
}

int DESCsort(int* arr, int size) { // 내림차순 정렬 함수
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << endl << "내림차순으로 정렬된 배열: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
	return arr[5];
}

int ADD(int arr[], int size) { // 배열의 합을 구하는 함수
	int add = 0;
	for (int i = 0; i < size; i++) add += arr[i];
	return add;
}

double AVG(int add, int size) { // 배열의 평균을 구하는 함수
	double avg = (double)add / size;
	return avg;
}