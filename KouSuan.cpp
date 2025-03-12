#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void twoDigitAdditionSubtraction(int times) {
    int num1, num2, result, correctCount = 0;
    char operation;
    for (int i = 0; i < times; ++i) {
        // �������������λ���ͼӷ����������
        num1 = rand() % 90 + 10;  // ������λ��
        num2 = rand() % 10 + 1;   // ���ɸ�λ��
        operation = (rand() % 2 == 0) ? '+' : '-';  // ���ѡ��ӷ������

        // ��ʾ��Ŀ��ź���Ŀ
        cout << i + 1 << ".: " << num1 << " " << operation << " " << num2 << " = ";
        cin >> result;

        // ���ݲ����жϴ��Ƿ���ȷ
        int correctAnswer = (operation == '+') ? (num1 + num2) : (num1 - num2);
        if (result == correctAnswer) {
            cout << "��" << endl;
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
        // �����������2��9֮������֣�ȷ��������1
        num1 = rand() % 8 + 2;  // ����2��9������
        num2 = rand() % 8 + 2;  // ����2��9������

        // ��ʾ��Ŀ��ź���Ŀ
        cout << i + 1 << ".: " << num1 << " * " << num2 << " = ";
        cin >> result;

        // �жϴ��Ƿ���ȷ
        int correctAnswer = num1 * num2;
        if (result == correctAnswer) {
            cout << "��" << endl;
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
    srand(time(0));  // �������������

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
