#ifndef _CSTRINGDIFF_H
#define _CSTRINGDIFF_H

/*
 cstringdiff.h
 Alexander Suglio
 1/26/2018
 version 1.0
 
 */

#include <iostream>

int LexDiff(const char* s1, const char* s2);
bool LexComp(const char* s1, const char* s2);
int DictionaryDiff(const char* s1, const char* s2);
bool DictionaryComp(const char* s1, const char* s2);

#endif

