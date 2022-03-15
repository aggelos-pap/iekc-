// for_slow_people.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    
   // _putch(65);
   // _getch();
    /*
    * int a,b;
    * char ch;
    * ch = 'A';
    * b = ch;
    * cout << b;
    * a = ch +2;
    */
    // Is he going towards pointers;
    //grapse programa pou tha diavazei ena char using getch() and putch()
    /* cout << "Dwse xarakthra. " << endl;
    char to_be_printed = _getch();
    cout << " O Char se ascii einai o: " << _putch(to_be_printed) << endl;
    cout << "Se morfi char einai: " << char(to_be_printed) << endl; */

    // ngp dia enan char kai na typwnei ton asciip
    /* char fine = _getch();
    cout << "O ascii einai: " << (int)fine << endl; */

    // ngp pou perimene to pathma enos char 
    // kai elegxei an einai lainkos kefalaios h oxi 


    char hello = _getch();
    /*if (int(hello) >= 65 && int(hello) <= 90)
    {
        cout << "Einai lat kefalaios" << endl;
    }
    else 
    {
        cout << "Den einai lat kefalaios" << endl;
    }*/

    (int(hello) >= 65 && int(hello) <= 90) ? cout << "Einai lat " : cout << "Den einai";
 


}

