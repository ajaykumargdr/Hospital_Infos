#include "stafInfo.h"
#include <fstream>

void stafInfo::setstaf(){  system("cls");
    std::fstream out("Staf_Infos.txt",std::ios::app);

    std::cout<<"Enter Staf Name : ";
    std::cin.ignore(1,'\n');
    getline(std::cin,name);

    out<<name<<"\n-------------\n\n";
    out<<"Name : "<<name<<"\n";

    std::cout<<"Enter staf age : ";
    std::cin>>age;  out<<"Age : "<<age<<"\n";

    std::cout<<"Enter Staf salary : ";
    std::cin>>salary; out<<"Salary : "<<salary<<"\n";

    std::cout<<"Enter staf position : ";std::cin.sync();
    getline(std::cin,position);
     out<<"Position : "<<position<<"\n\n";

    out.close();
}
void stafInfo::getstaf(){
    std::cout<<"Staf Name : "<<name<<std::endl;
    std::cout<<"Staf age : "<<age<<std::endl;
    std::cout<<"Staf salary : "<<salary<<std::endl;
    std::cout<<"Staf position : "<<position<<"\n\n";
}





