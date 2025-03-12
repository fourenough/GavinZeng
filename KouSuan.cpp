#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void twoDigitAdditionSubtraction(int times) {
    int num1, num2, result, correctCount = 0;
    char operation;
    for (int i = 0; i < times; ++i) {
        // 随机生成两个两位数和加法或减法操作
        num1 = rand() % 90 + 10;  // 生成两位数
        num2 = rand() % 10 + 1;   // 生成个位数
        operation = (rand() % 2 == 0) ? '+' : '-';  // 随机选择加法或减法

        // 显示题目序号和题目
        cout << i + 1 << ".: " << num1 << " " << operation << " " << num2 << " = ";
        cin >> result;

        // 根据操作判断答案是否正确
        int correctAnswer = (operation == '+') ? (num1 + num2) : (num1 - num2);
        if (result == correctAnswer) {
            cout << "√" << endl;
            correctCount++;
        }
        else {
            cout << "X " << correctAnswer << endl;
        }
    }
    double accuracy = (double)correctCount / times * 100;
    cout << "The got " << accuracy << "%" << " correct." << endl;

}

void oneDigitMultiplication(int times) {
    int num1, num2, result, correctCount = 0;
    for (int i = 0; i < times; ++i) {
        // 随机生成两个2到9之间的数字，确保不出现1
        num1 = rand() % 8 + 2;  // 生成2到9的数字
        num2 = rand() % 8 + 2;  // 生成2到9的数字

        // 显示题目序号和题目
        cout << i + 1 << ".: " << num1 << " * " << num2 << " = ";
        cin >> result;

        // 判断答案是否正确
        int correctAnswer = num1 * num2;
        if (result == correctAnswer) {
            cout << "√" << endl;
            correctCount++;
        }
        else {
            cout << "X " << correctAnswer << endl;
        }
    }

    double accuracy = (double)correctCount / times * 100;
    cout << "The got " << accuracy << "%" << " correct." << endl;
}

int main() {
    srand(time(0));  // 设置随机数种子

    int choice, times;
    cout << "1. 2-digits number practice for plus and minus" << endl;
    cout << "2. 1-digit number pratice for times" << endl;
    cin >> choice;

    cout << "Practice times:";
    cin >> times;

    if (choice == 1) {
        twoDigitAdditionSubtraction(times);
    }
    else if (choice == 2) {
        oneDigitMultiplication(times);
    }
    else {
        cout << "Please input 1 or 2" << endl;
    }
    system("pause");
    return 0;
}
