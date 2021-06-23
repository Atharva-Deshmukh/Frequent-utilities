/*
Hash Table is a data structure which stores data in an associative manner. 
In hash table, the data is stored in an array format where each data value has its own unique index value. 
Access of data becomes very fast, if we know the index of the desired data.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//try to get it dynamically
#define SIZE 20

//Define a data item having some data and key, based on which the search is to be conducted in a hash table.
struct DataItem        //SC = O(length*breadth)=O(2*n)=O(n)
{
   int data;
   int key;
};

//Define a hashing method to compute the hash code of the key of the data item.
int hashCode(int key)
{
   return key % SIZE;
}

//Search Operation
//Whenever an element is to be searched, compute the hash code of the key passed and 
//locate the element using that hash code as index in the array. 
//Use linear probing to get the element ahead if the element is not found at the computed hash code.

struct DataItem *search(int key) 
{
   //get the hash
   int hashIndex = hashCode(key);
	
   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex];
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }

   return NULL;        
}

int main()
{
	
	
	return 0;
}

