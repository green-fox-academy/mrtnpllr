#include "unity.h"
#include "game_logic.h"

void test_card_generation_value(void)
{
    card_t card = generate_five_cards();
    TEST_ASSERT_EQUAL_INT(FIVE, card.value);
}

void test_card_generation_symbol(void)
{
    card_t card = generate_five_cards();
    TEST_ASSERT_EQUAL_INT(DIAMONDS, card.symbol);
}

void test_card_generation_(void)
{
    card_t card = generate_five_cards();
    TEST_ASSERT_EQUAL_INT(-5, card.symbol);
}