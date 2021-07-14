#include "def.h"
#include <exception>
int main(){
    system("color 7A");

 if(passcode[0]=='\0'){ pass();}
    system("cls");
    menu();
    Choose();

return 0;
}
void menu(){
    using namespace std;
    for(int i=0;i<20;i++){cout<<"-";}
    cout<<"\n1 : Doctors Info"<<endl;
    cout<<"2 : Doctors Appoinment"<<endl;
    cout<<"3 : Saving stafe Information"<<endl;
    cout<<"4 : Patient appointment Menu"<<endl;
    cout<<"5 : Stafe information Menu"<<endl;
    cout<<"6 : clear all stafe information"<<endl;
    cout<<"7 : Change Password"<<endl;
    cout<<"8 : logout"<<endl;
    cout<<"9 : Exit "<<endl;
    for(int i=0;i<20;i++){cout<<"-";}cout<<endl;
}
void Choose(){
    std::cin.sync();
    int a; std::cin.sync(); std::cin>>a;
    switch (a) {
    case 1:system("color 7D"); di.Display_info();Back();
    case 2:system("color 7D"); DocChoose();break;
    case 3:system("color 7D"); stafmanage();Back();
    case 4:system("color 7D"); appinfo();
    case 5:system("color 7D"); system("cls");displySi();Back();
    case 6:system("color 7D"); system("cls");clearStaf();Back();
    case 7:system("color 7D"); changePassword();
    case 8:system("color 7D"); system("cls");passcode[0]='\0';pass();
    case 9: system("color 7D");std::cout<<"Thank You!"<<std::endl;exit(0);
    default :std::cout<<"\aWrong Key Entered!"<<std::endl;a='\0';
    sleep(2);
    main();

    }
}
void Back(){
    char l;
std::cout
<<"B - Back to Menu \n9 - Exit :";
std::cin.sync();
std::cin>>l;

    switch(l){
    case 'b':main();
    case '9':std::cout<<"Thank You"<<std::endl;exit(0);
    }

}
void pass(){
    std::ifstream password("password.txt");
   char pin[50]; password.getline(pin,50);password.close();
    std::cout<<"Enter Password "<<std::endl;
    std::cin.sync();
gets(passcode);
    if((strcmp(passcode,pin))==0){
        main();
    }

    else {std::cout<<"\a!!! Wrong password !!!\n"
        <<std::endl;passcode[0]='\0';std::cin.sync();
   pass();
    }


}
void doclist(){
    system("cls");
     std::cout<<std::endl<<"1 for Dr.Ajay \n";
    std::cout<<std::endl<<"2 for Dr.Ajith \n";
    std::cout<<std::endl<<"3 for Dr.Akhilesh \n";
    std::cout<<std::endl<<"4 for Dr.Anjali \n";
    std::cout<<std::endl<<"5 for Back \n";
}
void appinfo(){
    doclist();
     std::cin.sync();std::cin>>dc;

    switch(dc){
    case 1: doc1.getmyapp();Back();break;
 case 2: doc2.getmyapp();Back();break;
   case 3: doc3.getmyapp();Back();break;
   case 4: doc4.getmyapp();Back();break;
    default:Back();
    }

}
void changePassword(){

    system("cls");
    std::string newpin;
    std::cout<<"Enter New Password : ";
    std::ofstream out("password.txt");
    std::cin.sync();
    getline(std::cin,newpin);
    out<<newpin;
    out.close();
    std::cout<<"Password successfully changed :)\n";
    Back();

}
static void stafmanage(){

    si.setstaf();
    starr.push_back(si);
    std::cout<<"1 : New Entry\n2 : Back to menu : "; int sel;
    std::cin>>sel;

    if(sel==1) stafmanage();
    else main();

}
void displySi(){
    char input[100];
    std::ifstream in("Staf_infos.txt");
    while(in.getline(input,100)){
        std::cout<<input<<std::endl;
    }in.close();
}
void clearStaf(){
    std::cout<<"\aAre you Confirm For clearing all details !\n"
    <<"1 for Yes and 0 for No : ";

    bool r;std::cin>>r;

    if(r==1){

 std::fstream out("Staf_Infos.txt",std::ios::out);

out.clear();
out.close();
system("cls");
std::cout<<"File Successfully cleared :)\n"; }
else Back();
}
void DocChoose(){
   doclist();
    std::cin.sync();std::cin>>dc;

    switch(dc){
    case 1: doc1.setmyapp();Back();break;
    case 2:  doc2.setmyapp();Back();break;
    case 3:  doc3.setmyapp();Back();break;
    case 4:  doc4.setmyapp();Back();break;
    default:Back();
    }
}




//end
