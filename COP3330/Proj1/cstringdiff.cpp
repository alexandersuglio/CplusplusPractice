/*
 cstringdiff.cpp
 Alexander Suglio
 1/25/2018
 version 1.0
 */

#include <iostream>
#include <cstring>

#include <cstringdiff.h>

//Implementations for LexDiff, LexComp, DictionaryDiff, and DictionaryComp

int LexDiff(const char * s1, const char * s2);
bool LexComp(const char * s1, const char * s2);
int DictionaryDiff(const char * s1,const char * s2);
bool DictionaryComp(const char * s1,const char * s2);


int LexDiff(const char * s1, const char * s2)
{
    
    //static cast to get an integer value of the two chars
    int val = static_cast < int > ( * s1);
    int val2 = static_cast < int > ( * s2);
    
    //this gives string length of the two string parameters
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    
    //difference between individual chars from the two strings
    int diff;
    
    //initial flag status for my loops
    int flag = 999;
    
    //logic for if the two strings are the same size
    
    if (size1 == size2)
    {
        //iterates through each char in each string
        for (int i = 0; i < size1; i++)
        {
            //if the values are the same
            if ( * s1 == * s2)
            {
                s1++;
                s2++;
                diff = 69;
            } else if ( * s1 > * s2)
            {
                diff = val - val2;
                flag = 1000;
            } else
            {
                diff = val - val2;
                flag = 1000;
            }
            s1++;
            s2++;
        }
    }
    
    //logic for if the two strings are not equal
    else
    {
        //logic for if the first string is bigger
        if (size1 > size2)
        {
            //iterates through each char in each string
            for (int i = 0; i < size1; i++)
            {
                //if the values are the same
                
                if ( * s1 == * s2)
                {
                    
                }
                //if the 'ith' char from the first string is bigger than the 'ith' char of the second
                else if ( * s1 > * s2)
                {
                    diff = (int) * s1 - (int) * s2;
                    
                    flag = 1000;
                }
                //if the 'ith' char from the second string is bigger than the 'ith' char of the first
                else
                {
                    
                    diff = (int) * s2 - (int) * s1;
                    
                    flag = 1000;
                }
                s1++;
                s2++;
            }
        }
        //logic for if the second string is greater than the first
        else if (size2 > size1)
        {
            
            //iterates through each char in each string
            for (int i = 0; i < size2; i++)
            {
                
                //if the values are the same
                if ( * s1 == * s2)
                {
                    
                }
                
                //if the 'ith' char from the first string is bigger than the 'ith' char of the second
                else if ( * s1 > * s2)
                {
                    diff = (int) * s1 - (int) * s2;
                    flag = 1000;
                }
                
                //if the 'ith' char from the second string is bigger than the 'ith' char of the first
                else
                {
                    diff = (int) * s1 - (int) * s2;
                    flag = 1000;
                }
                s1++;
                s2++;
            }
        }
    }
    
    //flag logic to display 'diff'
    int output;
    if (flag == 1000)
    {
        output = diff;
    } else if (flag == 999)
    {
        output = 0;
    }
    
    return output;
    return 0;
}

bool LexComp(const char * s1, const char * s2)
{
   //if returned value equals 0
    if (LexDiff(s1, s2) == 0)
    {
        return true;
      
    //if returned val is positive
    } else if (LexDiff(s1, s2) > 0)
    {
        return true;
        
    //else assuming negative
    } else
    {
        return false;
    }
}

int DictionaryDiff(const char * s1, const char * s2)
{
   
    //difference between individual chars from the two strings
    int diff = 0;

    //initial flag status for my loops
    int flag = 1000;
    
    //this gives string length of the two string parameters
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    
    //gets int value of s1 and s2
    int val = (int) * s1;
    int val2 = (int) * s2;
    
    //logic to read upper and lower case letter the same
    if (val >= 97 && val <= 122)
    {
        val -= 32;
    }
    
    if (val2 >= 97 && val2 <= 122)
    {
        val2 -= 32;
    }
    
    //if the two strings are equal
    if (size1 == size2)
    {
        
        //if equal in size
        for (int i = 0; i < size1; i++)
        {
            
            //if same value
            if (val == val2)
            {
                
                return 0;
            
            //if the 'ith' char from the first string is bigger than the 'ith' char of the second
            } else if (val > val2)
            {
               
                return 1;
            
            //if the 'ith' char from the second string is bigger than the 'ith' char of the first
            } else if (val < val2)
            {
               
                return -1;
            }
           
            //iterate through
            s1++;
            s2++;
        }
    } else
    {
        //if size is not equal
        if (size1 > size2)
        {
            
            //iterate through 'ith' number of char in each string
            for (int i = 0; i < size1; i++)
            {
                
                //if vals are the same
                if (val == val2)
                {
                    
                }
                //if the 'ith' char from the first string is bigger than the 'ith' char of the second
                if (val > val2)
                {
                    return 1;
                    
                //if the 'ith' char from the second string is bigger than the 'ith' char of the first
                } else if (val < val2)
                {
                    return -1;
                    
                }
                
                //increment
                s1++;
                s2++;
            }
            
            //if second char string is bigger
        } else if (size2 > size1)
        {
            //iterate though
            for (int i = 0; i < size2; i++)
            {
                //if same value
                if (val == val2)
                {
                    
                }
                //if first 'ith' val is greater
                if (val > val2)
                {
                    return 1;
                
                //if second 'ith' val is greater
                } else if (val < val2)
                {
                    return -1;
                    
                }
                
                //increment up
                s1++;
                s2++;
            }
        }
    }
    
    //flag logic to display my 'diff'
    int output;
    
    if (flag == 1000)
    {
        output = diff;
        return output;
    } else {
        output = 3;
        return output;
    }
}

bool DictionaryComp(const char * s1, const char * s2)
{
    //if returned value equals 0

    if (DictionaryDiff(s1, s2) == 0)
    {
        return true;
        
    //if returned value is positive
    } else if (DictionaryDiff(s1, s2) > 0)
    {
        return true;
      
    //assume negative otherwise
    } else
    {
        return false;
    }
    
}
