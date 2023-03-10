#ifndef LAZY_H_INCLUDED
#define LAZY_H_INCLUDED

#include <stdio.h>
#include <stdint-gcc.h>
#include <stddef.h>
#include <stdint.h>

//LAZY is a project by CoffeeBrewer64 for simplifying software development, especially around emulation.
//This version: 0.0.1

/** SETTINGS **/

int LAZY_config_doPiAccurateTo1000 = 1; //if 1, all pi calculations will be done using LAZY_maths_pi1000





double LAZY_maths_pi = 3.14159;
double LAZY_maths_piAccurate = 3.141592653589793; //https://www.piday.org/million/
double LAZY_maths_pi100 = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679; //https://math.tools/numbers/pi/100
double LAZY_maths_pi1000 = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989; //https://math.tools/numbers/pi/100

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

typedef int8_t lInt8;
typedef uint8_t lUint8;
typedef int16_t lInt16;
typedef uint16_t lUint16;
typedef int32_t lInt32;
typedef uint32_t lUint32;
typedef int64_t lInt64;
typedef uint64_t lUint64;
typedef uintmax_t lUintMax; //usually 64 or 32.
typedef void lVoid;
typedef void *lPVoid;

typedef char* lName;

typedef struct lIntVector2
{
    int x;
    int y;
} lIntVector2;

typedef struct lFloatVector2
{
    float x;
    float y;
} lFloatVector2;

typedef struct lIntVector3
{
    int x;
    int y;
    int z;
} lIntVector3;

typedef struct lFloatVector3
{
    float x;
    float y;
    float z;
} lFloatVector3;

typedef struct lIntVector4
{
    int x;
    int y;
    int z;
    int w;
} lIntVector4;

typedef struct lFloatVector4
{
    float x;
    float y;
    float z;
    float w;
} lFloatVector4;

typedef struct lIntMatrix2
{
    lIntVector2 x;
    lIntVector2 y;
} lIntMatrix2;

typedef struct lFloatMatrix2
{
    lFloatVector2 x;
    lFloatVector2 y;
} lFloatMatrix2;

typedef struct lIntMatrix3
{
    lIntVector3 x;
    lIntVector3 y;
    lIntVector3 z;
} lIntMatrix3;

typedef struct lFloatMatrix3
{
    lFloatVector3 x;
    lFloatVector3 y;
    lFloatVector3 z;
} lFloatMatrix3;

typedef struct lIntMatrix4
{
    lIntVector4 x;
    lIntVector4 y;
    lIntVector4 z;
    lIntVector4 w;
} lIntMatrix4;

typedef struct lFloatMatrix4
{
    lFloatVector4 x;
    lFloatVector4 y;
    lFloatVector4 z;
    lFloatVector4 w;
} lFloatMatrix4;

typedef struct lFloatQuaternion
{
    float x;
    float y;
    float z;
    float w;
} lFloatQuaternion;

typedef struct lFloatColor
{
    float r;
    float g;
    float b;
    float a;
} lFloatColor;

typedef struct lFloatPlane
{
    float a;
    float b;
    float c;
    float d;
} lFloatPlane;

typedef struct lDateTime
{
    unsigned short year;
    unsigned short month;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
    unsigned int microsecond;
} lDateTime;


/***
===

BLOCKS

These are pieces of data containing ints which can be used for storing data and shifting that data along.

===
***/


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

/** LAZY_maths_radius **/

int LAZY_maths_radiusInt(int diameter)
{
    int ans = diameter / 2;
    return ans;
}

float LAZY_maths_radiusFloat(float diameter)
{
    float ans = diameter / 2;
    return ans;
}

double LAZY_maths_radiusDouble(double diameter)
{
    double ans = diameter / 2;
    return ans;
}

// TODO: Radius from area
// TODO: Circumference to area
// TODO: circle area from diameter

/** LAZY_maths_circumference **/

double LAZY_maths_circumference_radius(double radius)
{
    double ans;
    double dia;
    dia = radius + radius;
    if (LAZY_config_doPiAccurateTo1000 == 1)
    {
        ans = dia * LAZY_maths_pi1000;
    }
    else
    {
        ans = dia * LAZY_maths_pi;
    }
    return ans;
}

double LAZY_maths_circumference_diameter(double diameter)
{
    double ans;
    if (LAZY_config_doPiAccurateTo1000 == 1)
    {
        ans = diameter * LAZY_maths_pi1000;
    }
    else
    {
        ans = diameter * LAZY_maths_pi;
    }
    return ans;
}

/** LAZY_maths_circleArea_TYPE_radius **/

int LAZY_maths_circleAreaInt_radius(int radius)
{
    int ans;
    int dia = radius * 2;
    if (LAZY_config_doPiAccurateTo1000 == 1)
    {
        ans = LAZY_maths_pi1000 * dia;
    }
    else
    {
        int ans = LAZY_maths_pi * dia;
    }
    return ans;
}

float LAZY_maths_circleAreaFloat_radius(float radius)
{
    float ans;
    float dia = radius * 2;
    if (LAZY_config_doPiAccurateTo1000 == 1)
    {
        ans = LAZY_maths_pi * dia;
    }
    else
    {
        ans = LAZY_maths_piAccurate * dia;
    }
    return ans;
}

double LAZY_maths_circleAreaDouble_radius(double radius)
{
    double dia = radius * 2;
    double ans;
    if (LAZY_config_doPiAccurateTo1000 == 1)
    {
        ans = LAZY_maths_pi * dia;
    }
    else
    {
        ans = LAZY_maths_pi * dia;
    }
    return ans;
}

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
