#include <iostream>
#include <cstringsort.h>
#include <string.h>
#include <cstringdiff.h>


//implement the files below here
void LexStringSort(char* *beg, char* *end)
{

//difference gives the length/size, dictates how long the for loop goes
    int dif= end - beg;
    
    //outer loop for entire list
    for (int j = 0; j < dif -1; j++)
    {
        //inner loop
        for (int i = 0; i < dif -1; i++)
        {
            //string compare
            if (0 < strcmp(beg[i], beg[i +1]))
            {
                //convert char
                //iterate through
                char* conv = beg[i];
                beg[i] = beg[i +1];
                beg[i +1] = conv;
            }
        }
    }

    //beta to get to implement with lexcomp, still working on
    //able to figure out insertion sort though
   /*
    //char *i;
    int i=0;
    while(i<15)
    {
        
        if(LexComp(beg[i],beg[i+1]))
           {
               
           }
           else
           {
               char *temp = beg[i];
              // *beg = *(beg+1);
               // *(beg+1) = temp;
           }
        i++;
    }
  */

    
    /*
    if (end - beg < 2) return;
    int * i; // outer loop control
    int * j; // inner loop control
    int * k; // k is always j - 1
    int   t; // value holder
    for (i = beg; i != end; ++i)
    {
        t = *i;
        std::cout<<t;
        std::cout<<(char)t;
      //  for (k = i, j = k--; j != beg && t < *k; --j, --k)
        //    *j = *k;
       // *j = t;
    }
     */
    /*
    if(LexComp(beg[0],beg[1]))
    {
        std::cout<< "true";
    }
    else
    {
        std::cout<< "false";
    }
     */
} // see hint on this topic


void DictionaryStringSort(char* *beg, char* *end)
{
    
    int dif=end-beg;
    for (int j = 0; j < dif -1; j++) {
        for (int i = 0; i < dif -1; i++) {
            if (0 < strcmp(beg[i], beg[i +1])) {
                char* conv = beg[i];
                beg[i] = beg[i +1];
                beg[i +1] = conv;
            }
        }
    }
    
    
}   // see hint on this topic




