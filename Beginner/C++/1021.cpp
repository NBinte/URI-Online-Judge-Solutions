#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    int i=0;

    float N, remainingAmount, temp1, temp2, temp3, temp4, temp5, temp6, sub1, sub2, sub3,
          sub4, sub5, sub6, sumOfNotes = 0;

    int noteArr[6] = {100, 50, 20, 10, 5, 2};

    float coinArr[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    int ansNoteArr[6] = {0};

    int ansCoinArr[6] = {0};

    cin >> N;

    int note = (int) N;

    ansNoteArr[i] = note/noteArr[i];
    temp1 = ansNoteArr[i] * noteArr[i];
    sub1 = note - temp1;

    i++;
    ansNoteArr[i] = sub1/noteArr[i];
    temp2 = ansNoteArr[i] * noteArr[i];
    sub2 = sub1 - temp2;

    i++;
    ansNoteArr[i] = sub2/noteArr[i];
    temp3 = ansNoteArr[i] * noteArr[i];
    sub3 = sub2 - temp3;

    i++;
    ansNoteArr[i] = sub3/noteArr[i];
    temp4 = ansNoteArr[i] * noteArr[i];
    sub4 = sub3 - temp4;


    i++;
    ansNoteArr[i] = sub4/noteArr[i];
    temp5 = ansNoteArr[i] * noteArr[i];
    sub5 = sub4 - temp5;

    i++;
    ansNoteArr[i] = sub5/noteArr[i];
    temp6 = ansNoteArr[i] * noteArr[i];
    sub6 = sub5 - temp6;


    for(i=0; i<6; i++)
    {
        sumOfNotes = sumOfNotes + (ansNoteArr[i] * noteArr[i]);
    }

    remainingAmount = N - sumOfNotes;

    i=0;
    ansCoinArr[i] = remainingAmount / coinArr[i];
    temp1 = ansCoinArr[i] * coinArr[i];
    sub1 = remainingAmount - temp1;


    i++;
    ansCoinArr[i] = sub1 / coinArr[i];
    temp2 = ansCoinArr[i] * coinArr[i];
    sub2 = sub1 - temp2;


    i++;
    ansCoinArr[i] = sub2 / coinArr[i];
    temp3 = ansCoinArr[i] * coinArr[i];
    sub3 = sub2 - temp3;


    i++;
    ansCoinArr[i] = sub3 / coinArr[i];
    temp4 = ansCoinArr[i] * coinArr[i];
    sub4 = sub3 - temp4;


    i++;
    ansCoinArr[i] = sub4 / coinArr[i];
    temp5 = ansCoinArr[i] * coinArr[i];
    sub5 = sub4 - temp5;


    i++;
    ansCoinArr[i] = round(sub5 / coinArr[i]);
    temp6 = ansCoinArr[i] * coinArr[i];
    sub6 = sub5 - temp6;


    cout << "NOTAS:" << endl;

    for(i=0; i<6; i++)
    {

        cout << ansNoteArr[i] << " nota(s) de R$ " << noteArr[i] << ".00" << endl;

    }

    cout << "MOEDAS:" << endl;

    for(i=0; i<6; i++)
    {

        cout << ansCoinArr[i] << " moeda(s) de R$ " << fixed << setprecision(2) <<
             coinArr[i] << endl;

    }

    return 0;
}
