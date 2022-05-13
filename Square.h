///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Square.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef FINAL_EXAM_SQUARE_H
#define FINAL_EXAM_SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square(double newSide) : Rectangle(newSide, newSide){};

    double getSide();
};

#endif //FINAL_EXAM_SQUARE_H