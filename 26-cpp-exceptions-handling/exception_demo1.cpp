#include <iostream>

using namespace std;

double division(int a, int b) {
    if (b == 0) {
        // throw 语句的操作数可以是任意的表达式，表达式的结果的类型决定了抛出异常的类型
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main() {
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << z << endl;
    } catch (const char *msg) {
        cerr << msg << endl;
    }

    return 0;
}