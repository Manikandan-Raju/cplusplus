#include <iostream>
using namespace std;

class Mytime{
    private:
        int x, y, z;
    public:
    
        Mytime(int a,int b,int c): x(a),y(b),z(c){}
        Mytime(){};
        ~Mytime(){ cout<<"Dtor Called"<<endl; }
        void show(){
            cout<<x<<"\t"<<y<<"\t"<<z;
        }
        //cascading operator
        Mytime operator +(const Mytime &args){
            // Mytime time;
            // time.x = (this->x + args.x);
            // time.y = (this->y + args.y);
            // time.z = (this->z + args.z);
            // return time;
            Mytime *time = new Mytime();
            time->x = (this->x + args.x);
            time->y = (this->y + args.y);
            time->z = (this->z + args.z);
            return *time;
        }
};

int main()
{
  Mytime  t1(10,20,30);
  Mytime  t2(1,2,3);
  Mytime  t4(1,2,3);
  Mytime  t3;



 t3 = t1 + t2 +t4;



 t1.show();  // 10  20  30
  t2.show();  // 1   2   3
  t3.show();  // 11  22  33
}