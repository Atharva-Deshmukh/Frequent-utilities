/*
Vectors are the dynamic arrays that are used to store data.
It is different from arrays which store sequential data and are static in nature, Vectors provide more flexibility to the program. 
Vectors can adjust their size automatically when an element is inserted or deleted from it.
*/

#include<iostream>

//It is mandatory to include #include<vector> library before using vectors in C++.
#include<vector>

using namespace std; 

int main()
{
	//Declaration of Vectors in C++
	
	//syntax: vector< object_type > vector_variable_name;
	
	vector<int>v1;
	
	//Initialization of Vectors:
	//elements are added from end in vectors so we use push_back().
	//All the elements that need to be stored in the vector are pushed back one-by-one in the vector using the push_back() method.
	
	//Syntax: vector_name.push_back(element_value); 
	
	v1.push_back(12);
	v1.push_back(14);
	v1.push_back(16);
	v1.push_back(18);
	
	//usefull functions
	
	/*
	size() – It returns the number of elements currently present in the vector.
	max_size() – It returns the maximum number of elements that a vector can hold.
	capacity() – It returns the storage capacity currently allocated to the vector.
	resize(n) – It resizes the container to store ‘n’ elements.
	empty() – It returns whether the container is empty or not.
	
	Modifiers:

	assign() – It assigns a new value to the existing elements of the vector.
	push_back() – It pushes the element from back in the vector.
	pop_back() – It removes elements from the back of the vector.
	insert() – It inserts an element before a specified element in the vector.
	erase() – It is used to remove elements from a specified element or a range in the vector.
	swap() – It is used to swap the contents of two vectors of the same datatype. The sizes of vectors may differ.
	clear() – It is used to remove all the elements from the vector.
	
	Iterators:

	begin() –  It returns an iterator pointing to the first element in the vector.
	end() – It returns an iterator pointing to the last element in the vector.
	rbegin() – It returns a reverse iterator pointing to the last element in the vector.
	rend() – It returns a reverse iterator pointing to the element preceding the first element in the vector. Basically considered as a reverse end.
	cbegin() – It returns a constant iterator pointing to the first element in the vector.
	cend() – It returns a constant iterator pointing to the element that follows the last element in the vector.
	crbegin() – It returns a constant reverse iterator pointing to the last element in the vector.
	crend() – It returns a constant reverse iterator pointing to the element preceding the first element in the vector.
	*/
	
	//size of the vector
	 cout << "\nSize : " << v1.size(); 
	 
	 //maximum size of the vector
	 cout << "\nSize : " << v1.max_size(); 
	 
	 //capacity of the vector
	 cout << "\nSize : " << v1.capacity(); 
	
	cout<<"\n\n Printing the vector => \n";
	
	
	 //Printing the Output of vector ‘v1’ using iterators  begin() and end()  
    for(int i=0; i < v1.size(); i++)
   	cout << v1.at(i) << ' ';
    
    
	//cout << "Output of begin and end Function: ";                                   //not working
    //for (int i = v1.begin(); i != v1.end(); ++i) 
       // cout << *i << " "; 
	
	/*
	 //Printing the output of vector ‘a’ using iterators rbegin() and rend()          //not working  
    cout << "\nOutput of rbegin and rend Function: "; 
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir) 
        cout << *ir << " "; 
    */
	
	return 0;
}
