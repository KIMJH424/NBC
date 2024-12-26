#include<iostream>
#include <vector>
using namespace std;


void chVal(int& x) {
	x = 5;
}

float sum(const vector<float>& scores) {
	float arraysum = 0;
	for (float score : scores) {
		arraysum += score;
	}
	return arraysum;
}
float avg(float arraysum, int x) {
	return arraysum / x;
}

int main() {
	int x;
	chVal(x);
	vector<float> scores(x);
	for (int students = 0; students < x; students++) {
		cout << "학생" << students + 1 << "의 점수를 입력하시오 : ";
		cin >> scores[students];
	}
	float arraysum = sum(scores);
	float average = avg(arraysum, x);

	cout << " 총점 : " << arraysum << endl;
	cout << " 평균 : " << average << endl;
	return 0;
}
