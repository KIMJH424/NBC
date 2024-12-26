#include<iostream>
using namespace std;


void bubSort(int arr[], int n, bool ascending = true) {
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < n - 1 - i; j++) {
			if (ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}

int main() {
	int arr[5];
	int select;

	cout << "5���� ���ڸ� �Է��Ͻÿ� :";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	do {
		cout << "���ϴ� ���� ����� �����Ͻÿ�(1:��������,2:�������� :";
		cin >> select;

		if (select == 1) {
			bubSort(arr, 5, true);
			cout << "�������� ���� :";
			for (int i = 0; i < 5;i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		else if (select == 2) {
			bubSort(arr, 5, false); {
				cout << "�������� ���� :";
				for (int i = 0;i < 5;i++) {
					cout << arr[i] << " ";
				}
				cout << endl;
			}
		}
		else {
			cout << "1 �Ǵ� 2�� �Է����ּ���." << endl;
		}
	}
	while (select != 1 && select != 2);
	return 0;
}