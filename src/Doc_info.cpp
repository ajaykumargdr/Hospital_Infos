#include "Doc_info.h"
#include <iostream>
#include <fstream>
void Ajay::showInfo(){
       char file[100];
    std::ifstream in("Ajay_Doc1.txt");
   while( in.getline(file,100)){
    std::cout<<file<<std::endl;}
    in.close();
}
void Ajay::setmyapp(){
    //docAppointment myApp;
    myApp.Set();

}
void Ajay::getmyapp(){

     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
     myApp.get();
     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
}


void Ajith::showInfo(){
    char file[100];
    std::ifstream in("Ajith_Doc2.txt");
    while(in.getline(file,100)){
        std::cout<<file<<std::endl;
    }in.close();
}
void Ajith::setmyapp(){
    myApp2.Set();

}
void Ajith::getmyapp(){
    for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
     myApp2.get();
     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
}


void Akhilesh::showInfo(){
    char file[100];
    std::ifstream in("Akhilesh_Doc3.txt");
    while(in.getline(file,100)){
        std::cout<<file<<std::endl;
    }in.close();
}
void Akhilesh::setmyapp(){
    myApp3.Set();
}
void Akhilesh::getmyapp(){
    for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
     myApp3.get();
     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
}

void Anjali::showInfo(){
    char file[100];
    std::ifstream in("Anjali_Doc4.txt");
    while(in.getline(file,100)){
        std::cout<<file<<std::endl;
    }in.close();

}
void Anjali::setmyapp(){
myApp4.Set();
}
void Anjali::getmyapp(){
     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
     myApp4.get();
     for(int i=0;i<20;i++){std::cout<<"-";}
     std::cout<<std::endl;
}


void Disply_Doc_info::Display_info(){system("cls");
Ajay Doc1;
Ajith Doc2;
Akhilesh Doc3;
Anjali Doc4;
using namespace std;
    Doc1.showInfo();std::cout<<endl;
   Doc2.showInfo();std::cout<<endl;
    Doc3.showInfo();std::cout<<endl;
    Doc4.showInfo();std::cout<<endl;

}

