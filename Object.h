
//88888888888888888888888888888888888888888888888888888888888888
//----------------------- Object.h -----------------------------
//88888888888888888888888888888888888888888888888888888888888888
//D.Lopez

#ifndef OBJECT_H_
#define OBJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//___________________________________________________
// A bit of aliasing to a more conventional OOP style

//Generic Object and generic Object array
typedef void*   Object;
typedef Object* Array;

//Specific Objects for primitives
typedef bool*           Bool;
typedef int*            Int;
typedef unsigned int*   UnInt;
typedef short*          Short;
typedef long*           Long;
typedef unsigned short* UnShort;
typedef unsigned long*  UnLong;
typedef float*          Float;
typedef double*         Double;
typedef char*           Char;
typedef unsigned char*  UnChar;
typedef char*           String;


//_________________________________________________________________
// We'll need a convenient way to allocate memory for these Objects
Object newBool();
Object newBoolWith(bool);

Object newInt();
Object newIntWith(int);

Object newUnInt();
Object newUnIntWith(unsigned int);

Object newShort();
Object newShortWith(short);

Object newLong();
Object newLongWith(long);

Object newUnShort();
Object newUnShortWith(unsigned short);

Object newUnLong();
Object newUnLongWith(unsigned long);

Object newFloat();
Object newFloatWith(float);

Object newDouble();
Object newDoubleWith(double);

Object newChar();
Object newCharWith(char);

Object newUnChar();
Object newUnCharWith(unsigned char);

//             (lengthOfString)
Object newString(unsigned int);
Object newStringWith(String);

//___________________________
// Function to free up memory
void freePrim(Object);

//Copiers
//TODO

//Comparators
//TODO

//Printers
//TODO

#endif//OBJECT_H_
