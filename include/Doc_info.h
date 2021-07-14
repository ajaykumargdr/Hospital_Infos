#include "docAppointment.h"
class Doc_info
{
   public :
      virtual void showInfo(){};

};

class Ajay {
    public :
    void showInfo();

    docAppointment myApp;
    void setmyapp();
    void getmyapp();

};


class Ajith : public Doc_info{
    public :
    void showInfo();

     docAppointment myApp2;
    void setmyapp();
    void getmyapp();
};
class Akhilesh : public Doc_info{
    public :
    void showInfo();

     docAppointment myApp3;
    void setmyapp();
    void getmyapp();
};
class Anjali : public Doc_info{
    public :
    void showInfo();

     docAppointment myApp4;
    void setmyapp();
    void getmyapp();
};

class Disply_Doc_info{
    public :
    void Display_info();
};




