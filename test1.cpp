#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i = 10;
    int j = i;
    int *const k = &j;
    int &m = i;
    m = 20;
    *k = 30;
    int a = i;
    int b = j;
    cout << "a:" << a << " b:" << b << " " << &b << " " << &a << " " << &i << " " << &j << " " << &k << " " << &m << endl;
    return 0;
}