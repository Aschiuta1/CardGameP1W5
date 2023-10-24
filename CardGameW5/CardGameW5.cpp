// CardGameW5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;
#include <windows.h> // to use the comipler
// this is the structure that builds the card itself
struct  Card{
    int num;
    int color;
}card;
int main()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); //just once, allows you to use setconsoletextattr
    //tolani
    std::cout << "Welcome to Card Game!\n\n";
    std::cout << "These are the rules:\n";
    std::cout << "1. Each player will be presented 6 cards.\n";
    std::cout << "2. The player whose turn is first will play one of their cards.\n";
    std::cout << "3. The next cad played must match the colour or number of the previous card on the stack.\n";
    std::cout << "4. If none of your cards match, you get skipped.\n";
    std::cout << "5. The player with no more cards left in their deck wins and the game ends.\n\n";
    std::cout << "Are you ready? Let's get started!\n";

    srand(time(NULL));// assignes a random value each time we run the exe

    int possibleColors[4] = { 01,02,04,06 };

    card.num = rand() % 10 + 1;// randomises the card number
    card.color = possibleColors[rand() % 3];//randomises the card color
    SetConsoleTextAttribute(color, card.color); // this gives specific colors in this con
    cout << card.num <<endl;
    cout << card.color<<endl;

    Card cards[6];


    /*for (int i = 0; i < 2; i++) {
        cards[i] = Card(card.num, card.color);
    }*/
   

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
