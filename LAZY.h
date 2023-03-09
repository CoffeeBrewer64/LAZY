#ifndef LAZY_H_INCLUDED
#define LAZY_H_INCLUDED

#include <stdio.h>
#include <stdint-gcc.h>
#include <stdint.h>

//LAZY is a project by CoffeeBrewer64 for simplifying software development, especially around emulation.
//This version: 0.0.1

typedef struct
{
    unsigned char oneone;
    unsigned char onetwo;
    unsigned char onethree;
    unsigned char onefour;
    unsigned char onefive;
} LAZY_types_block1by5;

typedef struct
{
    unsigned char oneone;
    unsigned char onetwo;
    unsigned char onethree;
    unsigned char onefour;
    unsigned char onefive;

    unsigned char twoone;
    unsigned char twotwo;
    unsigned char twothree;
    unsigned char twofour;
    unsigned char twofive;
} LAZY_types_block2by5;

typedef struct
{
    unsigned char oneone;
    unsigned char onetwo;
    unsigned char onethree;
    unsigned char onefour;
    unsigned char onefive;

    unsigned char twoone;
    unsigned char twotwo;
    unsigned char twothree;
    unsigned char twofour;
    unsigned char twofive;

    unsigned char threeone;
    unsigned char threetwo;
    unsigned char threethree;
    unsigned char threefour;
    unsigned char threefive;
} LAZY_types_block3by5;

typedef struct
{
    unsigned char oneone;
    unsigned char onetwo;
    unsigned char onethree;
    unsigned char onefour;
    unsigned char onefive;

    unsigned char twoone;
    unsigned char twotwo;
    unsigned char twothree;
    unsigned char twofour;
    unsigned char twofive;

    unsigned char threeone;
    unsigned char threetwo;
    unsigned char threethree;
    unsigned char threefour;
    unsigned char threefive;

    unsigned char fourone;
    unsigned char fourtwo;
    unsigned char fourthree;
    unsigned char fourfour;
    unsigned char fourfive;
} LAZY_types_block4by5;

typedef struct
{
    unsigned char oneone;
    unsigned char onetwo;
    unsigned char onethree;
    unsigned char onefour;
    unsigned char onefive;

    unsigned char twoone;
    unsigned char twotwo;
    unsigned char twothree;
    unsigned char twofour;
    unsigned char twofive;

    unsigned char threeone;
    unsigned char threetwo;
    unsigned char threethree;
    unsigned char threefour;
    unsigned char threefive;

    unsigned char fourone;
    unsigned char fourtwo;
    unsigned char fourthree;
    unsigned char fourfour;
    unsigned char fourfive;

    unsigned char fiveone;
    unsigned char fivetwo;
    unsigned char fivethree;
    unsigned char fivefour;
    unsigned char fivefive;
} LAZY_types_block5by5;


/***

MATHS

Below are some functions for maths, if you somehow forgot how to use the + sign on your keyboard.

***/



/** LAZY_maths_inverseSquareRoot (and accurate version) **/

float LAZY_maths_inverseSquareRoot(float number) //taken from the Quake 3 source code
{
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;
  i  = 0x5f3759df - ( i >> 1 );
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );
  return y;
}

float LAZY_maths_accurateInverseSquareRoot(float number) //taken from the Quake 3 source code
{
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;
  i  = 0x5f3759df - ( i >> 1 );
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );
  return y;
}

/** LAZY_maths_cube **/

int LAZY_maths_cubeInt(int number)
{
    int ans = number * number * number;
    return ans;
}

float LAZY_maths_cubeFloat(float number)
{
    float ans = number * number * number;
    return ans;
}

double LAZY_maths_cubeDouble(double number)
{
    double ans = number * number * number;
    return ans;
}



/** LAZY_maths_square **/

int LAZY_maths_squareInt(int number)
{
    int ans = number * number;
    return ans;
}

float LAZY_maths_squareFloat(float number)
{
    float ans = number * number;
    return ans;
}

double LAZY_maths_squareDouble(double number)
{
    double ans = number * number;
    return ans;
}

/** LAZY_maths_add **/

int LAZY_maths_addInt(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

double LAZY_maths_addDouble(double num1, double num2)
{
    double ans = num1 + num2;
    return ans;
}

float LAZY_maths_addFloat(float num1, float num2)
{
    float ans = num1 + num2;
    return ans;
}

/** LAZY_maths_mulAdd **/

int LAZY_maths_mulAddInt(int num1, int num2, int num3)
{
    int ans = num1+num2+num3;
    return ans;
}

double LAZY_maths_mulAddDouble(double num1, double num2, double num3)
{
    double ans = num1+num2+num3;
    return ans;
}

float LAZY_maths_mulAddFloat(float num1, float num2, float num3)
{
    float ans = num1+num2+num3;
    return ans;
}

#endif // LAZY_H_INCLUDED
