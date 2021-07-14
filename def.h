#include <iostream>
#include <string>
#include "Doc_info.h"
#include "docAppointment.h"
#include "stafInfo.h"
#include <fstream>
#include <conio.h>
#include <fstream>
#include <sstream>

Ajay doc1;
Ajith doc2;
Akhilesh doc3;
Anjali doc4;
Disply_Doc_info di;
stafInfo si;

static std::vector<stafInfo> starr;

static void stafmanage();

void Choose();
void menu();
void Back();
void pass();
void DocChoose();
void doclist();
void appinfo();
void changePassword();
void displySi();
void clearStaf();

static char passcode[50];
int dc;
