#include <iostream>

using namespace std;

int main(){
    
    const int arraySize = 10; // size of array a
    int data[ arraySize ] = { 34, 56, 4, 100, 77, 51, 93, 30, 5, 52 };
    int insert; // temporary variable to hold element to insert
    
    cout << "Unsorted array:\n";
    // output original array
    for ( int i = 0; i < arraySize; i++ ){
        cout << " " << data[ i ] << " ";
    }
    
    //the body of the insertion sort algorithm
    //loop over the body of the array
    for (int next =1; next < arraySize; next++){
        insert = data[next]; //store the value in the current element
        int moveItem = next; //initialize location to place element
        
        //search for the location in which to put the current element
        while ((moveItem > 0) && (data[moveItem - 1] > insert)){
            
            //shift element one slot to the right
            data[moveItem] = data[moveItem - 1];
            moveItem--;
        } //end while loop
        data[moveItem] = insert; //place inserted element into the array
    }
    cout << endl;
    cout << "sorted array: " << endl;
    for (int i =0; i< arraySize; i++){
        cout << " " << data[i] << " ";
    }
    
    cout << endl;
    
}
