#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float N1, N2, N3, N4, examScore, reAverage;

    cin >> N1 >> N2 >> N3 >> N4;

    float average = ( (N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1) ) / (2 + 3 + 4 + 1);

    cout << "Media: " << fixed << setprecision(1) << average << endl;

    switch(average >= 7.0 )
    {

    case(true):
        cout << "Aluno aprovado." << endl;

    default:

        switch(average < 5.0)
        {

        case(true):
            cout << "Aluno reprovado." << endl;

        default:

            switch(average >= 5.0 && average <= 6.9)
            {

            case(true):
                cout << "Aluno em exame." << endl;
                cin >> examScore;

                cout << "Nota do exame: " << examScore << endl;

                reAverage = (average + examScore) / 2;

                switch(reAverage >= 5.0)
                {

                case(true):
                    cout << "Aluno aprovado." << endl;
                    cout << "Media final: " << fixed << setprecision(1) << reAverage <<endl;

                default:

                    switch(reAverage <= 4.9)
                    {

                    case(true):
                        cout << "Aluno reprovado." << endl;
                        cout << "Media final: " << fixed << setprecision(1) << reAverage <<endl;

                    }

                }

            }
        }

    }

    return 0;
}









