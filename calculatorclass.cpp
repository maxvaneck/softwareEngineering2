//
// Created by sages on 10/10/2018.
//

#include "calculatorclass.h"
#include <math.h>
#include <stdexcept>

namespace calc{

    Calculator::Calculator()
    {}



    double Calculator::add(double val1, double val2)
    {
        return val1+ val2;
    }

    double Calculator::subtract(double val1, double val2)
    {
        return val1- val2;
    }

    double Calculator::multiply(double val1, double val2)
    {
        return val1*val2;
    }

    double Calculator::divide(double val1, double val2)
    {
        if (val2 == 0)
            {throw std::logic_error("dividing by zero not possible");}
        else
            {return val1/val2;}
    }

    double Calculator::square(double val1)
    {
        return sqrt(val1);
    }
}