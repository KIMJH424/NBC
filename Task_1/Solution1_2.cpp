#include<iostream>

using namespace std;

void bubSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap을 대신하여 직접 교환
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void bubSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                // swap을 대신하여 직접 교환
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
        cout << "원하는 정렬 방식을 선택하시오(1:오름차순, 2:내림차순): ";
        cin >> select;

        if (select == 1) {
            // 오름차순 정렬
            bubSortAscending(arr, 5);
            cout << "오름차순 정렬 : ";
            for (int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if (select == 2) {
            // 내림차순 정렬
            bubSortDescending(arr, 5);
            cout << "내림차순 정렬 : ";
            for (int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "1 또는 2만 입력해주세요." << endl;
        }
    }
    while (select != 1 && select != 2);
    
    return 0;
}
