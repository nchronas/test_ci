#include "unity.h"
#include "d.h"
#include <stdbool.h>
#include "mock_m.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_d_test1(void)
{
    mocked_ExpectAndReturn(false);
    TEST_ASSERT_EQUAL_HEX8(84, AverageThreeBytes(0, 126, 126));
    mocked_ExpectAndReturn(true);
    TEST_ASSERT_EQUAL(-1, AverageThreeBytes(0, 126, 126));
    //TEST_IGNORE_MESSAGE("Need to Implement d");
}
