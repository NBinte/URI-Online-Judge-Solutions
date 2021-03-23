#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float A, B, C, area;

    cin >> A >> B >> C;

    switch(   (((A+B)>C) &&  ((B+C)>A) && ((C+A)>B))   )
    {

    case(true):
        cout << "Perimetro = " << fixed << setprecision(1) << A + B + C << endl;
        break;

    default:
        area = ((A+B) * C)/2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;

    }


    return 0;
}












