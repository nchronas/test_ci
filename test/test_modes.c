#include "unity.h"
#include "modes.h"
#include "mock_params.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_modes_NeedToImplement(void)
{
  get_voltage_ExpectAndReturn(4.0);
  TEST_ASSERT_EQUAL(DELFI_NOMINAL, satellite_modes(DELFI_NOMINAL));

  get_voltage_ExpectAndReturn(4.0f);
  TEST_ASSERT_EQUAL(DELFI_NOMINAL, satellite_modes(DELFI_SAFE));

  get_voltage_ExpectAndReturn(3.0f);
  TEST_ASSERT_EQUAL(DELFI_SAFE, satellite_modes(DELFI_NOMINAL));

  get_voltage_ExpectAndReturn(3.0f);
  TEST_ASSERT_EQUAL(DELFI_SAFE, satellite_modes(DELFI_SAFE));


}
