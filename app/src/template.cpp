#include <iostream>
using namespace std;



template <class T>

void sort(T arr[], int n)
{
    int i, j;
    T temp;
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            temp = arr[i];
        }
    }
}

class Point
{
    int x, y;
    public:
        Point(int a = 0, int b = 0) : x(a), y(b) {}
        void show() { cout << x << " " << y << endl; }
        bool operator <(const Point &args){
            if (this->x < args.x)
                return true;
            else
                return false;
        }
};

int main()
{
    int arr[] = {40, 30, 10, 50, 20};
    sort(arr, 5);
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    string names[] = {"hari", "john", "aman", "manu", "basu"};
    sort(names, 5);
    for (auto it : names)
        cout << it << " ";
    cout << endl;

    // Point p1(10, 20), p2(5, 3), p3(20, 4), p4(2, 8), p5(8, 4);
    // Point parr[] = {p1, p2, p3, p4, p5};
    // sort(parr, 5); // sort based on "x" value
    // for (auto it : parr)
    //     it.show();
    // cout << endl;
};