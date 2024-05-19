/** \file       main.cpp
 * \brief       His file contains a small shaped-drawing program
 * \author      Minh Nguyen Truong Quang
 * \date        19/05/2024
 * \copyright   UNIC
 * <BR>
 */
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include "Shapes.h"

using namespace std;

// Global constants
const int MAX_SHAPES = 10;
const int MIN_LENGTH = 5;
const int MAX_LENGTH = 20;
/**
* <code>main</code> is the main function of this program.
* <BR>
* @return Returns 0 if success, any other value otherwise.
*/
int main() {
    int choice = 0;
    int length, row, numShape = 0;
    char ch;
    int shapeType[MAX_SHAPES] = { 0 }, shapeLength[MAX_SHAPES] = { 0 };
    char shapeChar[MAX_SHAPES] = { 0 };
    do {
        cout << "Enter your Option (1 -> 7):" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter your length of the line:" << endl;
            cin >> length;
            cout << "Enter your character:" << endl;
            cin >> ch;
            drawHorizontalLine(length, ch);
            break;
        case 2:
            cout << "Enter your length of the line:" << endl;
            cin >> length;
            cout << "Enter your character:" << endl;
            cin >> ch;
            drawVerticalLine(length, ch);
            break;
        case 3:
            cout << "Enter your length of the square:" << endl;
            cin >> length;
            cout << "Enter your character:" << endl;
            cin >> ch;
            drawSquare(length, ch);
            break;
        case 4:
            cout << "Enter your height of the rectangle:" << endl;
            cin >> row;
            cout << "Enter your length of the rectangle:" << endl;
            cin >> length;
            cout << "Enter your character:" << endl;
            cin >> ch;
            drawRectangle(row, length, ch);
            break;
        case 6:
            cout << "Enter the number of shapes you want (From 1 to 10 shapes):" << endl;
            cin >> numShape;
            drawShape(numShape);
            break;
        case 7: // draw random with arrays
            initArrays(shapeType, shapeLength, shapeChar, MAX_SHAPES);
            drawArrays(shapeType, shapeLength, shapeChar, MAX_SHAPES);
            break;
        default:
            break;
        }
    } while (choice != 5);

    return 0;
}
