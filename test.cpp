//
// Created by sages on 10/10/2018.
//

#include "gtest/gtest.h"
#include "calculatorclass.h"

TEST(CalculatorTestcase,addTest){
    calc::Calculator calculator{};
    ASSERT_EQ(0,calculator.add(0,0));
}

TEST(CalculatorTestcase,subtractTest){
    calc::Calculator calculator{};
    ASSERT_EQ(0,calculator.subtract(0,0));
}

TEST(CalculatorTestcase,divideTestLogicError){
    calc::Calculator calculator{};
    ASSERT_ANY_THROW(calculator.divide(5,0));
}

TEST(CalculatorTestcase,divideTest){
    calc::Calculator calculator{};
    ASSERT_ANY_THROW(calculator.divide(5,0));
}

TEST(CalculatorTestcase,multiplyTest){
    calc::Calculator calculator{};
    ASSERT_EQ(0,calculator.multiply(0,0));
}

TEST(CalculatorTestcase,squareTest){
    calc::Calculator calculator{};
    ASSERT_EQ(0,calculator.square(0));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
