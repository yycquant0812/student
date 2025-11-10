#include<iostream>
using namespace std;

int main()
{ 
	float grade[6];
	float total = 0;
	cout << "請輸入1~5號同學的成績：";
	cout << endl;
	for (int i = 1; i < 6; i++){
		cin >> grade[i];
		total = total + grade[i];
	}
	grade[0] = total / 5;
	cout << "全班的平均成績為：" << grade[0];		
}
