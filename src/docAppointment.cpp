#include "docAppointment.h"

void docAppointment::Set(){
    system("cls");
    std::cin.sync();
    std::cout<<"Enter Your Name : ";
    std::getline(std::cin,name);
    std::cout<<"Enter Your Age : ";
    std::cin>>age;
    std::cout<<"Enter appointment Time : ";
    std::cin.ignore(1,'\n');
    gets(time);
    std::cout<<"Enter appointement number : ";
    std::cin>>num;
    std::cout<<"Your Appointment Have Saved :)"<<std::endl;

}

void docAppointment::get(){
     system("cls");
    std::cout<<"Name : "<<name<<std::endl;
    std::cout<<"Age : "<<age<<std::endl;
    std::cout<<"Time : "<<time<<std::endl;
    std::cout<<"Number : "<<num<<std::endl;
}

