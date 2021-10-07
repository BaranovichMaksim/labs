#include <iostream>
#include <conio.h>
#include "Complex.h"
#include "Tests.h"

int main()
{
    Complex num1(2, 8);  // первый объект класса Complex
    Complex num2(1, 5); // второй объект класса Complex
    Complex res(num1); // объект, предназначенный для записи результатов вычислений
    cout << "1st num " << '\n';
    if ((num1.getR() != 0) && (num1.getI() > 0))
        cout << num1.getR() << '+' << num1.getI() << 'i' << "\n";
    else
        if ((num1.getR() != 0) && (num1.getI() < 0))
            cout << num1.getR() - num1.getI() << "\n";
        else
            if ((num1.getR() != 0) && (num1.getI() == 0))
                cout << num1.getR() << "\n";
    num1.getID();
    cout << "2nd num " << '\n';
    if ((num2.getR() != 0) && (num2.getI() > 0))
        cout << num2.getR() << '+' << num2.getI() << 'i' << "\n";
    else
        if ((num2.getR() != 0) && (num2.getI() < 0))
            cout << num2.getR() - num2.getI() << "\n";
        else
            if ((num2.getR() != 0) && (num2.getI() == 0))
                cout << num2.getR() << "\n";
    if (testAdd(num1, num2, res)) 
    { 
        cout << "Adding test was succesfully completed" << endl; 
    }
    else 
        cout << "Adding test was failed" << endl;

    if (testSub(num1, num2, res)) 
    { 
        cout << "Subtraction test 1 was succesfully completed" << endl; 
    }
    else 
        cout << "Subtraction test 1 was failed" << endl;

    if (testSub(num2, num1, res)) 
    { 
        cout << "Subtraction test 2 was succesfully completed" << endl; 
    }
    else 
        cout << "Subtraction test 2 was failed" << endl;

    if (testMulti(num1, num2, res)) 
    { 
        cout << "Multiplication test was succesfully completed" << endl; 
    }
    else 
        cout << "Multiplication test was failed" << endl;

    if (testDiv(num1, num2, res)) 
    { 
        cout << "Division test 1 was succesfully completed" << endl; 
    }
    else 
        cout << "Division test 1 was failed" << endl;
    if (testDiv(num2, num1, res)) 
    { 
        cout << "Division test 2 was succesfully completed" << endl;
    }
    else 
        cout << "Division test 2 was failed" << endl;
    cout << "Number of objects:" << num2.getID() << endl;
    cout << "In String:" << endl;
    cout << num1.toString() << endl;
    cout << num2.toString() << endl;
    return 0;
}
