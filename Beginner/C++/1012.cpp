#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main()
{

    double A, B, C;

    cin >> A >> B >> C;

    double areaTriangle = (A * C) / 2.0 ;

    double areaCircle = pi * C * C;

    double areaTrapezium = ((A + B) * C) / 2.0;

    double areaSquare = B * B;

    double areaRectangle = A * B;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<areaTriangle<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<areaCircle<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<areaTrapezium<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<areaSquare<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<areaRectangle<<endl;

    return 0;
}
