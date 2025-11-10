#include<iostream>
using namespace std;

int main()
{
	int number;
	float grade[5][5] = {1,90,80,90,86.7,
					     2,99,70,85,84.7,
					     3,77,65,57,66.3,
					     4,61,87,88,78.7,
					     5,50,65,77,64};
	
	cout << "請輸入座號以查詢成績：";
	cin >> number;
	cout << number << "號同學的各科成績為：" << endl;
	cout << "國文\t英文\t數學" << endl;
	
	for (int j = 1; j < 4; j++)
		cout << " " << grade[number-1][j] << '\t';
}
