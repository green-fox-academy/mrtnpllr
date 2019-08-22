#include "unity.h"
#include "test_env.h"

void test_env_setup(void)
{
    TEST_ASSERT_EQUAL_INT(0, add(5, 6));
}