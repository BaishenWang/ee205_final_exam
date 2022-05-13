///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Retctangle.cpp
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"

double Rectangle::compute_area() {
    return Rectangle::width * Rectangle::length;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}