#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H


class Vehicle
{
public:
    Vehicle(int mass, int velocity, int accelaration);

protected:
    int _mass;
    int _velocity;
    int _accelaration;

};


#endif //FLYABLE_VEHICLE_H
