

#include <iostream>
using namespace std;

class Sample{
    // Sample(){cout<<"Show called";}
    // ~Sample(){cout<<"Show called";}
    public:
    
    void show(){
        
        cout<<"Show called";
    }

};

int main(){
    // Sample ob;
    // ob.show();
    Sample *ptr = new Sample();
    ptr->show();




    // delete ptr;
}