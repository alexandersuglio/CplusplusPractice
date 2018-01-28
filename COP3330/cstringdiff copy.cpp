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

    int size1 = strlen(s1);
    int size2 = strlen(s2);
    
    int df;
    int flag=999;
    
    if(size1==size2)
    {
        //if equal in size
        for(int i=0;i< size1;i++)
        {
            if(*s1 == *s2)
            {
               // continue;
            }
            else if(*s1 > *s2)
            {
                df=(int)*s1 -(int)*s2;
                flag=1000;
            }
            else
            {
                flag=1000;
                df=(int)*s1 -(int)*s2;
               
            }
            s1++;
            s2++;
        }
    }
    else
    {
        //if size is not equal
        if(size1 > size2)
        {
           // int d=size1-size2;
            
            for(int i=0; i<size1; i++)
            {
                
                if(*s1 == *s2)
                {
                    
                }
                else if(*s1 > *s2)
                {
                 df=(int)*s1 -(int)*s2;
                    //std::cout<<df;
                    flag=1000;
                }
                else
                {
                     df=(int)*s2 -(int)*s1;
                    //std::cout<<df;
                    flag=1000;
                }
                s1++;
                s2++;
            }
            
            
            
        }
        else if(size2>size1)
        {
            
            for(int i=0;i<size2;i++)
            {
                
                if(*s1==*s2)
                {
                    
                }
                else if(*s1>*s2)
                {
                     df=(int)*s1 -(int)*s2;
                    //std::cout<<df;
                    flag=1000;
                }
                else
                {
                    df=(int)*s1 -(int)*s2;
                   // std::cout<<df;
                    flag=1000;
                }
                s1++;
                s2++;
            }
            
            
        }
        
    }
    
        int output;
    //if (LexDiff == 0)
    //{
    if(flag==1000)
    {
        output=df;
    }
    else if (flag==999)
    {
        output=0;
    }
    
        return output;
}



bool LexComp(const char* s1, const char* s2){
    
    return true;
    
}








int DictionaryDiff(const char* s1, const char* s2){
//    int newVal = static_cast<int>(*s1);
//    int newVal2 = static_cast<int>(*s2);
//
//    if (newVal >= 97 && newVal <= 122){
//        newVal -= 32;
//    }
//    if (newVal >= 65 && newVal <=90){
//        newVal += 32;
//    }
//
//    if (newVal2 >= 65 && newVal2 <= 90 ){
//        newVal2 += 32;
//    }
//
//    if (newVal > newVal2){
//        return 1;
//    }
//    else if (newVal < newVal2){
//        return -1;
//    }
//    else {
//        return 0;
//    }
    
    
   // int newVal = static_cast<int>(*s2);
   // return newVal;
    
    
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    
    int df;
    int flag=999;
    
    if(size1==size2)
    {
        //if equal in size
        for(int i=0;i< size1;i++)
        {
            if(*s1==*s2)
            {
                // continue;
            }
            else if(*s1>*s2)
            {
                df=(int)*s1 -(int)*s2;
                flag=1000;
            }
            else
            {
                flag=1000;
                df=(int)*s1 -(int)*s2;
                
            }
            s1++;
            s2++;
        }
    }
    else
    {
        //if size is not equal
        if(size1>size2)
        {
            // int d=size1-size2;
            
            for(int i=0;i<size1;i++)
            {
                
                if(*s1==*s2)
                {
                    
                }
                else if(*s1>*s2)
                {
                    df=(int)*s1 -(int)*s2;
                    //std::cout<<df;
                    flag=1000;
                }
                else
                {
                    df=(int)*s2 -(int)*s1;
                    //std::cout<<df;
                    flag=1000;
                }
                s1++;
                s2++;
            }
            
            
            
        }
        else if(size2>size1)
        {
            
            for(int i=0;i<size2;i++)
            {
                
                if(*s1==*s2)
                {
                    
                }
                else if(*s1>*s2)
                {
                    df=(int)*s1 -(int)*s2;
                    //std::cout<<df;
                    flag=1000;
                }
                else
                {
                    df=(int)*s1 -(int)*s2;
                    // std::cout<<df;
                    flag=1000;
                }
                s1++;
                s2++;
            }
            
            
        }
        
    }
    
    int output;
    //if (LexDiff == 0)
    //{
    if(flag==1000)
    {
        output=df;
    }
    else if (flag==999)
    {
        output=0;
    }
    
    return output;

}


bool DictionaryComp(const char* s1, const char* s2){
    
    return true;

    
}




 
