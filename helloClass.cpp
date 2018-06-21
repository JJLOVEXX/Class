#include "helloClass.h"
#include<iostream>

using namespace std;


helloClass::helloClass()
{
   cout<<"I am created."<<endl;
}

void helloClass::sayHello()
{
   cout<<"Hello."<<endl;
}

helloClass::~helloClass()
{
   cout<<"I am destroyed."<<endl;
}

