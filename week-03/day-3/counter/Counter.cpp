#include "Counter.h"

Counter::Counter() : _fieldInitial(0), _fieldActual(0)
{}

Counter::Counter(int field)
{

    _fieldInitial = field;
    _fieldActual = field;
}

int Counter::getField() const
{
    return _fieldInitial;
}

void Counter::setField(int field)
{
    Counter::_fieldInitial = field;
}

int Counter::add()
{
    return _fieldActual++;
}

int Counter::add(int n)
{
    return _fieldActual += n;
}

int Counter::get()
{
    return _fieldActual;
}

void Counter::reset()
{
    _fieldActual = _fieldInitial;
}
