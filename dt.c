#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

extern "c" {
  #include "d.h"
}

TEST_GROUP(AwesomeExamples)
{
};

TEST(AwesomeExamples, FirstExample)
{
  TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(30, 40, 50));
  TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(10, 70, 40));
  TEST_ASSERT_EQUAL_HEX8(33, AverageThreeBytes(33, 33, 33));
}

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

