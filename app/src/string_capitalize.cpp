
#include <iostream>


using namespace std;

int main(){
    char  name[50]  = "Sample Data";
    int a = 10;
    int size =  sizeof(name) / sizeof(char);
    for (int i = 0;i<size;i++){
        if (islower(name[i]) )
        {
            name[i] = toupper(name[i]);
        }
        else if (isupper(name[i]) ) 
        {
            name[i] = tolower(name[i]);
        }
    }
    cout << name;
}