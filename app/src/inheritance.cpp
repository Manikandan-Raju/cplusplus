#include <iostream>
#include <string>
using namespace std;
class Vehicle{
  public:
     string name;
     string color;
     void set(string a,string b){ name=a; color=b;        }
     void show()                { cout<<name<<" "<<color; }
};
class Car : public Vehicle{
  private:
      int nop;
      string type;
  public:
      void setcar(int a,string b){  nop=a; type=b;    }
      void display()             {  cout<<nop<<" "<<type<<name<<endl; }
};
int main(){
    cout << "Vehicle" <<sizeof(Vehicle);
    cout << "Car" <<sizeof(Car);
    Vehicle vehicle;
    Car car;
    cout << "Vehicle" <<sizeof(vehicle);
    cout << "Car" <<sizeof(car);
    car.set("benz","black");
    car.setcar(5,"sedan");
    car.display();
}
