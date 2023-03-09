#ifndef LAZY_H_INCLUDED
#define LAZY_H_INCLUDED

#include <stdio.h>
#include <stdint-gcc.h>
#include <stddef.h>
#include <stdint.h>

//LAZY is a project by CoffeeBrewer64 for simplifying software development, especially around emulation.
//This version: 0.0.1

/***
===

SIZES

These are done in BYTES, NOT bits.

===
***/


#define LAZY_sizes_256Bytes (0x100)
#define LAZY_sizes_512Bytes (0x200)
#define LAZY_sizes_1KiB (0x400)
#define LAZY_sizes_2KiB (0x800)
#define LAZY_sizes_4KiB (0x1000)
#define LAZY_sizes_8KiB (0x2000)
#define LAZY_sizes_16KiB (0x4000)
#define LAZY_sizes_32KiB (0x8000)
#define LAZY_sizes_64KiB  (0x10000)
#define LAZY_sizes_128KiB (0x20000)
#define LAZY_sizes_256KiB (0x40000)
#define LAZY_sizes_512KiB (0x80000)
#define LAZY_sizes_1MiB   (0x100000)
#define LAZY_sizes_2MiB   (0x200000)
#define LAZY_sizes_4MiB   (0x400000)
#define LAZY_sizes_6MiB   (0x600000)
#define LAZY_sizes_8MiB   (0x800000)
#define LAZY_sizes_16MiB  (0x1000000)
#define LAZY_sizes_32MiB  (0x2000000)
#define LAZY_sizes_64MiB  (0x4000000)
#define LAZY_sizes_128MiB (0x8000000)
#define LAZY_sizes_256MiB (0x10000000)
#define LAZY_sizes_512MiB (0x20000000)
#define LAZY_sizes_1GiB   (0x40000000)
#define LAZY_sizes_2GiB   (0x80000000)
#define LAZY_sizes_4GiB   (0x100000000LL)
#define LAZY_sizes_6GiB  (0x400000000LL)
#define LAZY_sizes_8GiB   (0x200000000LL)
#define LAZY_sizes_32GiB  (0x800000000LL)





typedef struct
{
    unsigned int oneone;
    unsigned int onetwo;
    unsigned int onethree;
    unsigned int onefour;
    unsigned int onefive;
} LAZY_types_block1by5;

typedef struct
{
    unsigned int oneone;
    unsigned int onetwo;
    unsigned int onethree;
    unsigned int onefour;
    unsigned int onefive;

    unsigned int twoone;
    unsigned int twotwo;
    unsigned int twothree;
    unsigned int twofour;
    unsigned int twofive;
} LAZY_types_block2by5;

typedef struct
{
    unsigned int oneone;
    unsigned int onetwo;
    unsigned int onethree;
    unsigned int onefour;
    unsigned int onefive;

    unsigned int twoone;
    unsigned int twotwo;
    unsigned int twothree;
    unsigned int twofour;
    unsigned int twofive;

    unsigned int threeone;
    unsigned int threetwo;
    unsigned int threethree;
    unsigned int threefour;
    unsigned int threefive;
} LAZY_types_block3by5;

typedef struct
{
    unsigned int oneone;
    unsigned int onetwo;
    unsigned int onethree;
    unsigned int onefour;
    unsigned int onefive;

    unsigned int twoone;
    unsigned int twotwo;
    unsigned int twothree;
    unsigned int twofour;
    unsigned int twofive;

    unsigned int threeone;
    unsigned int threetwo;
    unsigned int threethree;
    unsigned int threefour;
    unsigned int threefive;

    unsigned int fourone;
    unsigned int fourtwo;
    unsigned int fourthree;
    unsigned int fourfour;
    unsigned int fourfive;
} LAZY_types_block4by5;

typedef struct
{
    unsigned int oneone;
    unsigned int onetwo;
    unsigned int onethree;
    unsigned int onefour;
    unsigned int onefive;

    unsigned int twoone;
    unsigned int twotwo;
    unsigned int twothree;
    unsigned int twofour;
    unsigned int twofive;

    unsigned int threeone;
    unsigned int threetwo;
    unsigned int threethree;
    unsigned int threefour;
    unsigned int threefive;

    unsigned int fourone;
    unsigned int fourtwo;
    unsigned int fourthree;
    unsigned int fourfour;
    unsigned int fourfive;

    unsigned int fiveone;
    unsigned int fivetwo;
    unsigned int fivethree;
    unsigned int fivefour;
    unsigned int fivefive;
} LAZY_types_block5by5;

LAZY_types_block1by5 LAZY_dummy_block1by5;
LAZY_types_block2by5 LAZY_dummy_block2by5;
LAZY_types_block3by5 LAZY_dummy_block3by5;
LAZY_types_block4by5 LAZY_dummy_block4by5;
LAZY_types_block5by5 LAZY_dummy_block5by5;



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

/** LAZY_maths_percentage **/

int LAZY_maths_percentageInt(int num, int outOf)
{
    int ans1 = num / outOf;
    int ansf = ans1 * 100; //ansf = answer final
    return ansf;
}

double LAZY_maths_percentageDouble(double num, double outOf)
{
    double ans1 = num / outOf;
    double ansf = ans1 * 100; //ansf = answer final
    return ansf;
}

float LAZY_maths_percentageFloat(float num, float outOf)
{
    float ans1 = num / outOf;
    float ansf = ans1 * 100; //ansf = answer final
    return ansf;
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
