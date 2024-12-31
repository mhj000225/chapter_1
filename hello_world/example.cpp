#include <iostream>
using namespace std;

void input(int arr[], int siae); // input �Լ� ����
int ADD(int arr[], int aize); // ADD �Լ� ����
double AVG(int add, int size); // AVG �Լ� ����
int ASCsort(int arr[], int size); // ASCsort �Լ� ����
int DESCsort(int* arr, int size); // DESsort �Լ� ���� (������ ���)

int main()
{
// �ʼ� ���
// 1 : ����ڷκ��� 5���� ���ڸ� �Է� �޾� �迭�� �����ϰ� �̵��� �հ�� ����� ����ؼ� ���
// 2 : 5���� ���ڸ� �Է� ���� ������ �迭�� Ȱ��
// 3 : �հ� ����� ���ϴ� ������ main�ռ��� �ѹ��� �ۼ����� ���� ���� �Լ��� �������ִ� ������

//���� ���
// 1 ������ �������� ���İ� �������� ���Ĥ��� �����ؾߵȴ�
// 2 : ���� 1�� �Է� ������ �������� ����, ���� 2�� �Է� ������ �������� ������ �ϵ��� ����
// 3 : algorithm ����� sort �Լ��� ������� �ʰ� ���� ����
// 4 : �������� ���İ� �������� ���� ������ ���� �Լ��� ����



	const int size = 5; // �Է¹��� ������ ������ ����� ����
	int arr[size]; // ũ�Ⱑ 5�� �迭 arr ����
	int sort; // ��������, �������� ���� ����

	input(arr, size); // input �Լ� ȣ��

	while (1) { // ��������, �������� ���� �ݺ���
		cout << "�������� ������ ���ϸ� 1, �������� ������ ���ϸ� 2�� �Է�: ";
		cin >> sort;
		if (sort == 1) {
			ASCsort(arr, size);
			break;
		}
		else if (sort == 2) {
			DESCsort(arr, size);
			break;
		}
		else cout << "�߸��� �Է��Դϴ�." << endl; // 1, 2 �̿� �ٸ����� �Է½� ���Է� (���⼭ ��ȯ���� �ݺ��Ǵ� �����߻�)
	}

	int add = ADD(arr, size);
	double avg = AVG(add, size);

	cout << "�迭�� ���� : " << add << endl;
	cout << "�迭�� ��� : " << avg << endl;
	return 0;
}

void input(int arr[], int size) {
	cout << "�� " << size << "���� ���ڸ� �Է��ϼ���." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է��ϼ���: ";
		cin >> arr[i];
		cout << arr[i] << "�� �ԷµǾ����ϴ�." << endl;
	}
	cout << endl << "�Էµ� �迭 : ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
}

int ASCsort(int arr[], int size) { // �������� ���� �Լ�
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
	cout << endl << "������������ ���ĵ� �迭: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
	return arr[5];
}

int DESCsort(int* arr, int size) { // �������� ���� �Լ�
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
	cout << endl << "������������ ���ĵ� �迭: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl << endl;
	return arr[5];
}

int ADD(int arr[], int size) { // �迭�� ���� ���ϴ� �Լ�
	int add = 0;
	for (int i = 0; i < size; i++) add += arr[i];
	return add;
}

double AVG(int add, int size) { // �迭�� ����� ���ϴ� �Լ�
	double avg = (double)add / size;
	return avg;
}