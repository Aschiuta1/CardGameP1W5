// CardGameW5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <windows.h> // to use the comipler

int main()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); //just once, allows you to use setconsoletextattr
   // system("color 01"); //change color
   // std::cout << "B9\n"; //cards

    //system("color 04 ");
   // std::cout << "R4";
   
    SetConsoleTextAttribute(color, 01); // this gives specific colors in this con
    cout << "B9\n";


    SetConsoleTextAttribute(color, 04);
    cout << "R4";


   

    // erik

    SetConsoleTextAttribute(color, 15); // to change color on the console return
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
