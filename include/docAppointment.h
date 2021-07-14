#ifndef DOCAPPOINTMENT_H
#define DOCAPPOINTMENT_H
#include <iostream>
#include <string>

class docAppointment
{
    private:
        std::string name;
        char time[6];
        int age,num;

    public:
    void Set();
    void get();

};

#endif // DOCAPPOINTMENT_H
