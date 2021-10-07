#pragma once
#include "Complex.h";
#include <iostream>
bool testAdd(Complex a, Complex b, Complex r)
{
    r.Add(a, b);
    if ((r.getR() == a.getR() + b.getR()) && (r.getI() == a.getI() + b.getI()))
    {
        return true;
    }
    else
        return false;
}
bool testSub(Complex a, Complex b, Complex r)
{
    r.Sub(a, b);
    if ((r.getR() == a.getR() - b.getR()) && (r.getI() == a.getI() - b.getI()))
    {
        return true;
    }
    else
        return false;
}
bool testMulti(Complex a, Complex b, Complex r)
{
    r.Multi(a, b);
    if ((r.getR() == (a.getR() * b.getR() - a.getI() * b.getI())) && (r.getI() == (a.getI() * b.getR() + a.getR() * b.getI())))
    {
        return true;
    }
    else return false;
}
bool testDiv(Complex a, Complex b, Complex r)
{
    r.Div(a, b);
    if ((r.getR() == (a.getR() * b.getR() + a.getI() * b.getI()) / (b.getR() * b.getR() + b.getI() * b.getI())) && (r.getI() == (a.getI() * b.getR() - a.getR() * b.getI()) / (b.getR() * b.getR() + b.getI() * b.getI())))
    {
        return true;
    }
    else return false;
}