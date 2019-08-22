#ifndef POKER_PROJECT_GAME_LOGIC_H
#define POKER_PROJECT_GAME_LOGIC_H

#include "../data_struct/structs.h"

card_t generate_five_cards();

outcome_t evaluate_winner(card_t* player_one, card_t* player_two) {
    return BLACK_WINS;
}

#endif