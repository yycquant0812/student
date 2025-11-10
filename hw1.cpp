#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int a, b;
    cout << "請輸入你的名字:";
    cin >> name;
    cout <<  "你好, " << name << "!" << endl;
    cout << "請輸入兩個數字, 用空白隔開:";
    cin >> a >> b;
    cout << "你輸入的是: " << a << " 和 " << b << endl;
    

    return 0;
}