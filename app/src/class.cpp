#include <iostream>
#include <string>
using namespace std;


class Vehicle 
{
    public:
        string name;
        int model;
        string color;

        void setvalues(string name,int model,string color);
        void show();
        string get_color();
        static int a;

        
};

void Vehicle::setvalues (string name,int model,string color)
{
    this->name = name;
    Vehicle::model = model;
    Vehicle::color = color;
}

void Vehicle::show()
{
    cout << Vehicle::name << Vehicle::model << Vehicle::color;
}

string Vehicle::get_color()
{

    return color;
}



int main()
{
  Vehicle vob;
  vob.setvalues("car",2020,"black");
  vob.show();  //
//   cout << Vehicle::a;
 
 Vehicle *vob1;
  vob1 = new Vehicle();
  vob1->setvalues("truck",2020,"black");  
  vob1->show();




 string color1 = vob.get_color();
  string color2 = vob1->get_color();
  if(color1==color2)
  {
    cout<<"Same colour\n";
  }
  else
  {
    cout<<"Diff colour\n";
  }
}