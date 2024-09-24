#include "app/include/datatypes.h"

void  Datatypes::ranges(){
    cout << "char ranges from :                     " << CHAR_MIN << " to " << CHAR_MAX << " with size of " << sizeof(char) << " bytes" << endl;
    cout << "short char ranges from :               " << SCHAR_MIN << " to " << SCHAR_MAX << " with size of " << sizeof(signed char) << " bytes" << endl;
    cout << "unsigned char ranges from :            " << 0 << " to " << UCHAR_MAX << " with size of " << sizeof(unsigned char) << " bytes" << endl;
    
    cout << "short int ranges from :                " << SHRT_MIN << " to " << SHRT_MAX << " with size of " << sizeof(short) << " bytes" << endl;
    cout << "unsigned short int ranges from :       " << 0 << " to " << USHRT_MAX << " with size of " << sizeof(unsigned short) << " bytes" << endl;
    cout << "int ranges from :                      " << INT_MIN << " to " << INT_MAX << " with size of " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int ranges from :             " << 0 << " to " << UINT_MAX << " with size of " << sizeof(unsigned int) << " bytes" << endl;
    cout << "long int ranges from :                 " << LONG_MIN << " to " << LONG_MAX << " with size of " << sizeof(long) << " bytes" << endl;
    cout << "unsigned long int ranges from :        " << 0 << " to " << ULONG_MAX << " with size of " << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long int ranges from :            " << LLONG_MIN << " to " << LLONG_MAX << " with size of " << sizeof(long long) << " bytes" << endl;
    cout << "unsigned long long int ranges from :   " << 0 << " to " << ULLONG_MAX << " with size of " << sizeof(unsigned long long) << " bytes" << endl;
    
    cout << "float ranges from :                    " << FLT_MIN << " to " << FLT_MAX << " with size of " << sizeof(float) << " bytes" << endl;
    cout << "double ranges from :                   " << DBL_MIN << " to " << DBL_MAX << " with size of " << sizeof(double) << " bytes" << endl;
    cout << "long double ranges from :              " << -LDBL_MIN << " to " << +LDBL_MAX << " with size of " << sizeof(long double) << " bytes" << endl;
}