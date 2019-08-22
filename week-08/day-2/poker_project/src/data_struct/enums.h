#ifndef POKER_PROJECT_ENUMS_H
#define POKER_PROJECT_ENUMS_H

typedef enum values {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
}values_t;

typedef enum symbol {
    CLUBS,
    SPADES,
    HEARTS,
    DIAMONDS
}symbol_t;

typedef enum outcome {
    WHITE_WINS,
    BLACK_WINS,
    DRAW
}outcome_t;

#endif
