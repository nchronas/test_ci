#include "unity.h"
#include "d.h"
#include "m.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_d_test1(void)
{
    TEST_ASSERT_EQUAL_HEX8(84, AverageThreeBytes(0, 126, 126));
    //TEST_IGNORE_MESSAGE("Need to Implement d");
}
