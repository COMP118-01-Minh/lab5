/** \file       main.cpp
 * \brief       His file contains a small shaped-drawing program
 * \author      Minh Nguyen Truong Quang
 * \date        08/03/2024
 * \copyright   UNIC
 * <BR>
 */

#ifndef SHAPES_H
#define SHAPES_H

 // Prototypes
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawShape(int numShapes);
void initArrays(int shapeType[], int shapeLength[], char shapeChar[], const int arrSize);
void drawArrays(const int shapeType[], const int shapeLength[], const char shapeChar[], const int arrSize);

#endif 
