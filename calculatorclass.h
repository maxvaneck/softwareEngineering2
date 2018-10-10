//
// Created by sages on 10/10/2018.
//

#ifndef CALCULATOR_CALCULATORCLASS_H
#define CALCULATOR_CALCULATORCLASS_H
namespace calc{
    class Calculator{

    private:
        double val1;
        double val2;

    public:
        Calculator();

        double add(double val1, double val2);
        double subtract(double val1, double val2);
        double multiply(double val1, double val2);
        double square(double val1);
        double divide(double val1, double val2);
    };

}
#endif //CALCULATOR_CALCULATORCLASS_H
