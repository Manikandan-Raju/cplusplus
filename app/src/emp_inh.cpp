#include <iostream>
#include <string>
using namespace std;

class Emp{
    public:
        string Empname; 
        string Empdept;
        int Empbasic;
        void show(){
            cout<<"Empname\t" << Empname<< endl;
            cout<<"Empdept\t" << Empdept<< endl;
            cout<<"Empbasic\t" << Empbasic<< endl;
        }
};
class ContractEmp : public Emp{
    public:
        int Allow;
        int Netpay;
        ContractEmp(string Empname,string Empdept,int Empbasic,int Allow){
            this->Empname = Empname;
            this->Empdept = Empdept;
            this->Empbasic = Empbasic;
            this->Allow = Allow;
            
        }
        void findnetpay(){
            this->Netpay = Empbasic+Allow;
        }
        void display(){
            cout<<"Allow\t" << Allow<< endl;
            cout<<"Netpay\t" << Netpay<< endl;
        }
};



int main(){
  ContractEmp ob("ravi","sales",15000,7000);
   
  ob.show();   //Empname = ravi
            //    Empdept = sales
            //    Empbasic = 15000
  ob.findnetpay();
  ob.display();
            //    Allow = 7000
            //    Netpay = 22000
}