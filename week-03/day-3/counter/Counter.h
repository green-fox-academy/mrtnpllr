#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <string>

class Counter
{
public:
    Counter();

    Counter(int field);

    int getField() const;

    void setField(int field);

    int add();

    int add(int n);

    int get();

    void reset();

private:
    int _fieldInitial;
    int _fieldActual;

};


#endif //COUNTER_COUNTER_H
