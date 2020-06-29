#ifndef __HARD__LANG__DEFINED__

#define __HARD__LANG__DEFINED__ 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

const int ONE=1;
const int TWO=2;
const int THREE=3;
const int FOUR=4;
const int FIVE=5;
const int SIX=6;
const int SEVEN=7;
const int EIGHT=8;
const int NINE=9;
const int ZERO=0;
#define HUNDRED(num) ((num)*100)
#define THOUSAND(num) ((num)*1000)
#define LAKH(num) ((num)*100000)
#define CRORE(num) ((num)*10000000)
#define True 1
#define False 0
#define __HARD__ main
#define integer int
#define character char
#define String const char*
#define decimal float
#define boolean bool
#define __call__(func) func
#define __func__(type,name) type name
#define __loop__(initialization,comparision,iteration) for(initialization;comparision;iteration)
#define __until__(boolean) while(boolean)
#define __log__(...) printf(__VA_ARGS__)
#define __get__(...) scanf(__VA_ARGS__)
#define __int__(var) "%d",& var
#define __float__(var) "%f",& var
#define __double__(var) "%lf",& var
#define __string__(var) "%s",& var

#define _int_(var) "%d",var
#define _float_(var) "%f",var
#define _double_(var) "%lf",var
#define _string_(var) "%s",var


#define __ return
#define ___ 0
#define _ ;
#define Int(name,val) int name = val
#define Str(name,val) const char* name = val
#define Float(name,val) float name = val
#define Double(name,val) double name = val
#define LLInt(name,val) long long int name = val
#define Long(name,val) long name = val
#define Char(name,val) char name = val
#define Bool(name,val) bool name = val
#define __newl__ __call__(__log__)("\n")
#endif
