#include <iostream>
#include <math.h>
//float PI=3.14;
float volume(float side)
{return side*side*side;}

float volume(float length,float breadth, float height)
{return length*breadth*height;}

float volume(float radius, float height)
{return M_PI*radius*radius*height;}



int main() {
    float vol;
    int ch;
    float a,b,c;
   //std::cout<<"Select shape:\n1.Cube\n2.Cubid\n3.Cylinder\n";
   //std::cin>>ch;

        std::cout<<"How many no. of inputs you want to give:";
        std::cin>>ch;
    switch (ch) {
        case 1:
        std::cout<<"You select cube.\nEnter side of cube:";
        std::cin>>a;
        vol=volume(a);
        break;

        case 2:
        std::cout<<"You select cylinder.\nEnter radius of cylinder:";
        std::cin>>a;
        std::cout<<"Enter height of cylinder:";
        std::cin>>b;
        vol=volume(a,b);
        break;
        
        case 3:
        std::cout<<"You select cubid.\nEnter length of cubid:";
        std::cin>>a;
        std::cout<<"Enter breadth of cubid:";
        std::cin>>b;
        std::cout<<"Enter height of cubid:";
        std::cin>>c;
        vol=volume(a,b,c);
        break;

        default:
        std::cout<<"Wrong Input...";
    }
    std::cout<<"\n Volume is ";
    std::cout<<vol;
    
}
