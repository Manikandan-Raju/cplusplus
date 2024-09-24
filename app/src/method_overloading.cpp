#include <iostream>
using namespace std;

class Express{
    public:
        int add(int a,int b){
            return a+b;
        }
        string add(string a,int b){
            return a+to_string(b);
        }
        string add(int a,string b){
            return to_string(a)+b;
        }
        string add(string a,string b){
            return a+b;
        }
};

int main()
{
  Express ob;
  ob.add(10,20);             // ans = 30
  cout << ob.add(10,20)<<endl;
  ob.add(10,"sample");      // ans = 10sample
  cout << ob.add(10,"sample")<<endl;
  ob.add("sample", "text"); // ans = sampletext
  cout << ob.add("sample", "text")<<endl;
  ob.add("blr",25);          // ans = blr25
  cout << ob.add("blr",25)<<endl;
}
