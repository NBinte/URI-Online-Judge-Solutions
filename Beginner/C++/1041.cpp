#include <iostream>

using namespace std;

int main()
{

    float x, y;

    cin >> x >> y;


    switch(x > 0 && y >0)
    {

    case(true):
        cout << "Q1" << endl;

    default:

        switch(x < 0 && y > 0)
        {

        case(true):
            cout << "Q2" << endl;

        default:

            switch(x > 0 && y < 0)
            {

            case(true):
                cout << "Q4" << endl;

            default:

                switch(x < 0 && y < 0)
                {

                case(true):
                    cout << "Q3" << endl;

                default:

                    switch(x == 0 && y == 0)
                    {

                    case(true):
                        cout << "Origem" << endl;

                    default:

                        switch(x == 0 && y != 0)
                        {

                        case(true):
                            cout << "Eixo Y" << endl;

                        default:
                            switch(y == 0 && x != 0)
                            {

                            case(true):
                                cout << "Eixo X" << endl;

                            }

                        }

                    }

                }

            }
        }
    }


    return 0;
}










