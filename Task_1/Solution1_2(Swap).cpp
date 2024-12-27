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

	cout << "5개의 숫자를 입력하시오 :";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	do {
		cout << "원하는 정렬 방식을 선택하시오(1:오름차순,2:내림차순 :";
		cin >> select;

		if (select == 1) {
			bubSort(arr, 5, true);
			cout << "오름차순 정렬 :";
			for (int i = 0; i < 5;i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		}
		else if (select == 2) {
			bubSort(arr, 5, false); {
				cout << "내림차순 정렬 :";
				for (int i = 0;i < 5;i++) {
					cout << arr[i] << " ";
				}
				cout << endl;
			}
		}
		else {
			cout << "1 또는 2만 입력해주세요." << endl;
		}
	}
	while (select != 1 && select != 2);
	return 0;
}