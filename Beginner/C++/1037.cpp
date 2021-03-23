#include <iostream>

using namespace std;

int main()
{

    float A;

    cin >> A;

    switch(A < 0 || A > 100)
    {

    case (true):

        cout << "Fora de intervalo" << endl;

    default:

        switch(A >= 0 && A <= 25)
        {

        case(true):
            cout << "Intervalo [0,25]" << endl;
        default:
            switch(A > 25 && A <= 50)
            {

            case(true):
                cout << "Intervalo (25,50]" << endl;
            default:
                switch(A > 50 && A <= 75)
                {

                case(true):
                    cout << "Intervalo (50,75]" << endl;
                default:
                    switch(A > 75 && A <= 100)
                    {

                    case(true):
                        cout << "Intervalo (75,100]" << endl;

                    }

                }

            }

        }
    }

    return 0;
}







