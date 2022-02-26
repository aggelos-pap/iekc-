/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#define PI 3.14
#include <iostream>
// // #include <cstring>
// #include <cstdint>
// #include <climits>
using namespace std;

// 2 ampersands typos
int main()
{
    // //---------Using cin cout exercise. Prwth
    // int a = 15;
    // char c = 'A';
    // float b = a / 2.0;

    // cout << "a + 2=" << a + 2 << " b=" << b << " c=" << endl;
    // cout << "Τέλος\n";

    // // α + 2 = 17 β = 7.5 c=
    // //Τέλος

    // Emfanizei othoni dose 2 aritmhmous int
    // float m/o
    // Emfanise o m/o a,b einai c
    //  int num1, num2;
    //  float avg;
    //  cout << "Dose proto arithmo:" << endl;
    //  cin >> num1;
    //  cout << "Dose deftero arithmo:" << endl;
    //  cin >> num2;
    //  avg = (num1 + num2) / 2.0;
    //  cout << "O mesos oros ton" << num1 << "kai" << num2 << "einai" << avg << endl;
    //   system(pause>0);
    //  int a,b;
    //  float c;
    //  c = (a+b) / 2.0;
    //  cin>>a>>b;
    //  cout <<"O mo einai:" << a << "kai" << b<< "einai"<<c<<endl;
    // Allh mia ekfwnhsh
    // Na grafei programma pou tha zitaei 3 vathmous enos mathiti kai tha ypologizei to mo vathmous
    // if mo >= 10: o mathitis perase me meso oro tade else kophkes
    // 3rd ex
    //  float grade1, grade2, grade3;
    //  cout << "Doste 1o vathmo" << endl;;
    //  cin >> grade1;
    //  cout << "Doste 2o vathmo" << endl;
    //  cin >> grade2;
    //  cout << "Doste 3o vathmo" << endl;
    //  cin >> grade3;

    // if ((grade1 >= 10) && (grade2 >= 10) && (grade3 >= 10))
    // {
    //     cout << "Perases me vathmo:" << (grade1+grade2+grade3) / 3.0;
    // }
    // else
    // {
    //     cout << "Better luck next time!";
    // }

    // 4th exe
    // zita enan num kai des an einai odd or even
    int number;
    cout << "Dose arithmo:";
    cin >> number;
    int p = number / 2;
    if (p * 2 == number)
    {
        cout << ("Even");
    }
    else
    {
        cout << ("Odd");
    }

    //             a
    //             p = a /2
    //              p = 2*a
    // if yes even else off

    return 0;
}
