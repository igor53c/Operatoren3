// Operatoren3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    char c1 = 204;

    cout << "Datentyp 'char' ASCII-Wert = " << static_cast<int>(c1) << endl;

    char c2, c3;

    c2 = ~c1;

    // 1100 1100
    // 0011 0011  51

    cout << "~ Operator. Bitweise komplement: " << static_cast<int>(c2) << endl;

    c2 = c1 << 2;

    // -52 = 1100 1100 << 2 = 0011 0000 = 48

    cout << "<< Operator. Linksverschiebung: " << static_cast<int>(c2) << endl;

    c2 = c1 >> 2;

    // -52 = 1100 1100 >> 2 = 1111 0011 = -13

    cout << ">> Operator. Rechtsverschiebung: " << static_cast<int>(c2) << endl;

    c2 = 24;

    c3 = c1 | c2;

    // -52 | 24 = 1100 1100 | 0001 1000 = 1101 1100 = -36


    cout << "| Operator. Bitweises Oder: " << static_cast<int>(c3) << endl;

    c3 = c1 & c2;

    // -52 & 24 = 1100 1100 & 0001 1000 = 0000 1000 = 8

    cout << "& Operator. Bitweises Und: " << static_cast<int>(c3) << endl;

    c3 = c1 ^ c2;

    // -52 & 24 = 1100 1100 & 0001 1000 = 1101 0100 = -44

    cout << "^ Operator. Bitweises exklusives Oder(XOR): " << static_cast<int>(c3) << endl;

    c3 = 24;    // 0001 1000

    int position = 4;

    char retValue = (c3 >> position) & 1;  // 0001 1000 >> 4 = 0000 0001 & 0000 0001 = 0000 0001 = 1

    cout.setf(ios::boolalpha);

    cout << "retValue: " << (retValue == 1) << endl;

    position = 5;

    c1 = c3 | (1 << position); // 1 << 5 = 0010 0000 | 0001 1000 = 0011 1000 = 56

    cout << "c1: " << static_cast<int>(c1) << endl;

    cout << "c3: " << static_cast<int>(c3) << endl;

    c3 = c2 << 1; // 0001 1000 << 1 = 0011 0000 = 48

    cout << "c3: " << static_cast<int>(c3) << endl;

    c3 = c2 >> 1; // 0001 1000 >> 1 = 0000 1100 = 12

    cout << "c3: " << static_cast<int>(c3) << endl;






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
