/*
 cstringdiff.cpp
 Alexander Suglio
 1/26/2018
 version 1.0
*/


#include <iostream>
#include <cstring>

#include <cstringdiff.h>

//Implementations for LexDiff, LexComp, DictionaryDiff, and DictionaryComp

int LexDiff(const char* s1, const char* s2);
bool LexComp(const char* s1, const char* s2);
int DictionaryDiff(const char* s1, const char* s2);
bool DictionaryComp(const char* s1, const char* s2);



int LexDiff(const char* s1, const char* s2){

    
    int stringDiff;
    
    size_t size1 = strlen(s1);
    size_t size2 = strlen(s2);
    
    //stringDiff = size1;
    
    for (size_t i =0; i < size1; i++){
        if(s1[i] == s2[i]){
           //continue;
           
        }
        else if (s1[i] > s2[i]){
          //  stringDiff = 1;
            std::cout << "s1 is bigger size";
        }
        else {
         //   stringDiff = -1;
            std::cout << "s1 is smaller size";

        }
    }
    
    //if (stringDiff ==0){
    
        int newVal = static_cast<int>(*s1);
        int newVal2 = static_cast<int>(*s2);
        
        
        if (newVal < newVal2){
            int Result = newVal - newVal2;
            return Result;
        }
        
        else if (newVal > newVal2){
            int Result = newVal - newVal2;
            return Result;
        }
        
        else{
            int Result = 0;
            return Result;
        }
        
  //  }
    
    
    
    
    
    
    
    
    /*
    size_t size1 = strlen(s1);
    
    for (int i=0; i < size1; i++){
        //int newVal = static_cast<int>(*s1);
        int val = static_cast<int>(s1[i]);
       return val;
    }
    
    */
   
    /*
   int LexDiff = 0;
   
    size_t size1 = strlen(s1);
    size_t size2 = strlen(s2);
    
    //return size1;
    size_t size = size1;
   
   if (size1 < size2){
   size = size2;
   }
    
    
    for (size_t i = 0; i < size; i++)
    {
        if (s1[i] == s2[i])
            continue;
        else if (s1[i] > s2[i])
        {
            LexDiff = 1;
            break;
        }
        else
        {
            LexDiff = -1;
            break;
        }
    }
*/
    
//if (LexDiff == 0)
//{
    
}


bool LexComp(const char* s1, const char* s2){
    
    return true;
    
}



int DictionaryDiff(const char* s1, const char* s2){
    int newVal = static_cast<int>(*s1);
    int newVal2 = static_cast<int>(*s2);
   
    if (newVal >= 97 && newVal <= 122){
        newVal -= 32;
    }
    if (newVal >= 65 && newVal <=90){
        newVal += 32;
    }
    
    if (newVal2 >= 65 && newVal2 <= 90 ){
        newVal2 += 32;
    }
    
    if (newVal > newVal2){
        return 1;
    }
    else if (newVal < newVal2){
        return -1;
    }
    else {
        return 0;
    }
   // int newVal = static_cast<int>(*s2);
   // return newVal;

}






bool DictionaryComp(const char* s1, const char* s2){
    
    return true;

    
}




 
