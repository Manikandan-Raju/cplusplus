#include <iostream>
using namespace std;

struct  bitstructure
{
    int data[8];
    int size;
    int on;
    int off;
};


int setvalues(bitstructure &arg,int list[],int size)
{

    for (int i=0;i< size;i++)
    {
        arg.data[i] = list[i];
    }
    arg.size = size;
     
}


void display(const struct bitstructure & args){
    int i;
    for (int i=0;i< args.size;i++)
    {
        cout << args.data[i] << " ";
    }
    cout << endl;

}

void group(const struct bitstructure & args){
    
}

int main()
{
    bitstructure ob;
    int list[] = {1,0,1,0,1,1,1,0};
    setvalues(ob,list,8);
    group(ob);
    display(ob);
} 