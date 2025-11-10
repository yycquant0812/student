#include<iostream>
using namespace std;

int main()
{
	float BMI;
	float WH[2][6];
	float w = 0, h = 0, h_m;
		
	cout << "請輸入1~5號同學的體重（公斤）、身高（公分）：" << '\n';
	for (int i = 1; i < 6; i++){
		cin >> WH[0][i] >> WH[1][i];
		w = w + WH[0][i];
		h = h + WH[1][i];
 	}
	cout << "座號" << '\t' << "BMI值" << '\n';
	for (int i = 1; i < 6; i++){
		h_m = WH[1][i] / 100;
		BMI = WH[0][i] / (h_m * h_m);
		cout << i << '\t' << BMI << '\n'; 
	}
	cout << "班的平均體重：" << w/5 << '\n'; 
	cout << "全班的平均身高：" << h/5; 
}
