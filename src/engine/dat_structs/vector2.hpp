#pragma once

// #define _USE_MATH_DEFINES
// #include <math.h>
// M_PI <- :)

/*
 * For the newbies browsing the codebase,
 * Vector2 is a struct that holds x and y values.
 * Why is is this useful you may ask?
 * Who wants to manage two x's and y's in so many classes!
 * - paxs, Feb 07 2023 7:49:18
 */
struct Vector2 {
  Vector2(float pos_x, float pos_y)
    : x(pos_x), y(pos_y) 
  {}

  Vector2()
    : x(0), y(0) 
  {}

  float x, y;
};
