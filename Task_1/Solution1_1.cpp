#include<iostream>
using namespace std;

void chVal(int &x) {
	x=5;
}

float sum(float scores[], int x){
	float arraysum =  0;
for (int students = 0; students < x; students++) {
	arraysum += scores[students];	
}
return arraysum;
}
float avg(float arraysum, int x){
	return arraysum / x;
}
int main(){
	int x;
	chVal(x);
	float scores[5]{};
	for (int students = 0; students < x; students++) {
		cout << "�л�" << students + 1 << "�� ������ �Է��Ͻÿ� : ";
		cin >> scores[students];
	}
	float arraysum = sum(scores, x);
	float arrayavg = avg(arraysum, x);

	cout << " ���� : " << arraysum << endl;
	cout << " ��� : " << arrayavg << endl;
	
	return 0;

}




