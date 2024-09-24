#include<fstream>
#include <iostream>
using namespace std;




int main(){
  ofstream ofp("data.txt");
  ofp<<1234<<endl;
  ofp<<"sample\n";
  ofp<<5.8<<endl;
  ofp<<5<<endl;
  ofp.close();
  int x;
  string y;
  float z;
  ifstream ifp;
  ifp.open("data.txt");
  ifp>>x>>y>>z;
  cout <<x<<y<<z;
}