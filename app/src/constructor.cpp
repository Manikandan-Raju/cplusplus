#include <iostream>
#include <string>
using namespace std;

int a = 1;

class Vehicle
{
    public:
        string  name;
        string  color;
        int price;
        static int total;
        static int no_of_Vehicle;
        static int average;

        Vehicle()
        {
            Vehicle::no_of_Vehicle += 1;
        }

        void setvalues(string  name,string  color,int price)
        {
            this->name = name;
            this->color = color;
            this->price = price;
            Vehicle::total += price;

        }

        static int get_avg_price()
        {
            Vehicle::average = Vehicle::total/Vehicle::no_of_Vehicle;
            a++;
            cout << "############AVerage" <<Vehicle::average<<a;
            return Vehicle::average;
        }

        ~Vehicle()
        {
            Vehicle::no_of_Vehicle -= 1;
            Vehicle::total -= price;
            Vehicle::average = Vehicle::total/Vehicle::no_of_Vehicle;


        }

};

int Vehicle::total = 0;
int Vehicle::no_of_Vehicle = 0;
int Vehicle::average = 0;





int main()
{

  Vehicle *v1 = new Vehicle();
  Vehicle *v2 = new Vehicle();
  Vehicle *v3 = new Vehicle();
  
  v1->setvalues("car","black",150000);
  v2->setvalues("Bus","green",450000);
  v3->setvalues("Truck","brown",600000);
  Vehicle::get_avg_price();



    Vehicle *v4 = new Vehicle();
    v4->setvalues("Jeep","grey",250000);
    
    Vehicle::get_avg_price();



    delete v4;



    Vehicle::get_avg_price();
}