#include "Complex.h";
#include <iostream>
Complex::~Complex()
{
    delete[] st;
}
Complex::Complex()
{
    i = 0;
    r = 0;
}
Complex:: Complex(int rl, int im)//конструктор с параметрами
{
    st = new char[10];
    r = rl;
    i = im;
    for (int i1 = 0; i1 < 10; i1++)
        st[i1] = '0';
}
Complex:: Complex(const Complex& other)// Конструктор копирования
{
    c_id = 0;
    st = new char[10];
    r = other.r;
    i = other.i;
    for (int i1 = 0; i1 < 10; i1++)
        st[i1] = other.st[i1];
}
// метод сложения
void Complex::Add(Complex op1, Complex op2) {
    r = op1.r + op2.r;
    i = op1.i + op2.i;
}
//метод вычитания
void Complex::Sub(Complex op1, Complex op2) {
    r = op1.r - op2.r;
    i = op1.i - op2.i;
}
//метод умножения
void Complex::Multi(Complex op1, Complex op2)
{
    r = (op1.r * op2.r - op1.i * op2.i);
    i = (op1.i * op2.r + op1.r * op2.i);
}
//метод деления
void Complex::Div(Complex op1, Complex op2)
{
    r = (op1.r * op2.r + op1.i * op2.i) / (op2.r * op2.r + op2.i * op2.i);
    i = (op1.i * op2.r - op1.r * op2.i) / (op2.r * op2.r + op2.i * op2.i);
}
//метод перевода в массив char
char* Complex::toString()
{
    st = new char[15];
    sprintf_s(st,15,"%d+%di",r,i);
    char* ch = st;
    return ch;
}

int Complex:: getR() { return r; }
int Complex:: getI() { return i; }
int Complex:: getID() { c_id = c++;  return c_id; }
int Complex::c = 1;
