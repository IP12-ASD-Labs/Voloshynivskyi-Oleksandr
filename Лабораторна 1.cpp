#include "iostream.h"
#include "math.h"

int main()
{
    double pi = 3.1415926535;
    double grad = 270;
    double rad = 0;

    rad = (grad * (pi / 180));
    cout << rad << endl;

    grad = rad * (180 / pi);
    cout << grad << endl;

    return 0;
}