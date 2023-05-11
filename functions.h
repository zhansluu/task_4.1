#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <cmath>

double polinom0degree ()
{
    return 12;
}

double polinom1degree (double x)
{
    return x-4;
}

double polinom2degree (double x)
{
    return 3*x*x+4*x-3;
}

double polinom3degree (double x)
{
    return 4*x*x*x-6*x*x+7*x-10;
}

double func (double x)
{
    return 6*x*x+cos(x)*exp(4*x);
}

double integralOfPolinom0degree (double x)
{
    return 12*x;
}

double integralOfPolinom1degree (double x)
{
    return 0.5*x*x-4*x;
}

double integralOfPolinom2degree (double x)
{
    return x*x*x+2*x*x-3*x;
}

double integralOfPolinom3degree (double x)
{
    return x*x*x*x-2*x*x*x+3.5*x*x-10*x;
}

double integralOfFunc (double x)
{
    return 2*x*x*x+(exp(4*x)*sin(x)+4*cos(x)*exp(4*x))/17;
}

double leftRectangles (size_t num, double a, double b)
{
    switch (num){
    case 0:
        return (b-a)*polinom0degree();
    case 1:
        return (b-a)*polinom1degree(a);
    case 2:
        return (b-a)*polinom2degree(a);
    case 3:
        return (b-a)*polinom3degree(a);
    case 4:
        return (b-a)*func(a);
    }
    return 0;
}

double rightRectangles (size_t num, double a, double b)
{
    switch (num){
        case 0:
            return (b-a)*polinom0degree();
        case 1:
            return (b-a)*polinom1degree(b);
        case 2:
            return (b-a)*polinom2degree(b);
        case 3:
            return (b-a)*polinom3degree(b);
        case 4:
            return (b-a)*func(b);
        }
    return 0;
}

double middleRectangles (size_t num, double a, double b)
{
    switch (num){
        case 0:
            return (b-a)*polinom0degree();
        case 1:
            return (b-a)*polinom1degree((a+b)/2);
        case 2:
            return (b-a)*polinom2degree((a+b)/2);
        case 3:
            return (b-a)*polinom3degree((a+b)/2);
        case 4:
            return (b-a)*func((a+b)/2);
        }
    return 0;
}

double trapeze (size_t num, double a, double b)
{
    switch (num){
        case 0:
            return (b-a)*(polinom0degree()+polinom0degree())/2;
        case 1:
            return (b-a)*(polinom1degree(a)+polinom1degree(b))/2;
        case 2:
            return (b-a)*(polinom2degree(a)+polinom2degree(b))/2;
        case 3:
            return (b-a)*(polinom3degree(a)+polinom3degree(b))/2;
        case 4:
            return (b-a)*(func(a)+func(b))/2;
        }
    return 0;
}

double simpson (size_t num, double a, double b)
{
    switch (num){
        case 0:
            return (b-a)*(polinom0degree()+polinom0degree()+4*polinom0degree())/6;
        case 1:
            return (b-a)*(polinom1degree(a)+polinom1degree(b)+4*polinom1degree((a+b)/2))/6;
        case 2:
            return (b-a)*(polinom2degree(a)+polinom2degree(b)+4*polinom2degree((a+b)/2))/6;
        case 3:
            return (b-a)*(polinom3degree(a)+polinom3degree(b)+4*polinom3degree((a+b)/2))/6;
        case 4:
            return (b-a)*(func(a)+func(b)+4*func((a+b)/2))/6;
        }
    return 0;
}

double threeEighths (size_t num, double a, double b)
{
    switch (num){
        case 0:
            return (b-a)*((polinom0degree()+polinom0degree())/8+3*(polinom0degree()+polinom0degree())/8);
        case 1:
            return (b-a)*((polinom1degree(a)+polinom1degree(b))/8+3*(polinom1degree((2*a+b)/3)+polinom1degree((a+2*b)/3))/8);
        case 2:
            return (b-a)*((polinom2degree(a)+polinom2degree(b))/8+3*(polinom2degree((2*a+b)/3)+polinom2degree((a+2*b)/3))/8);
        case 3:
            return (b-a)*((polinom3degree(a)+polinom3degree(b))/8+3*(polinom3degree((2*a+b)/3)+polinom3degree((a+2*b)/3))/8);
        case 4:
            return (b-a)*((func(a)+func(b))/8+3*(func((2*a+b)/3)+func((a+2*b)/3))/8);
        }
    return 0;
}

#endif // FUNCTIONS_H_INCLUDED
