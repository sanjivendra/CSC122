// This program demonstrates the dynamic stack
// class DynIntStack.
#include <iostream>
#include <time.h>
//#include <cstdlib>
//#include <stdio.h>

#include "DynIntStack.h" 
using namespace std;

int main()
{
	clock_t t1, t2;
	t1 = clock();
   DynIntStack stack; 
   int popped_value;
   // Push values 5, 10, and 15 on the stack
   for (int value = 50; value <= 150; value = value + 50)
   {
      cout << "Push: " << value << "\n";
      stack.push(value);
   }
   t2 = clock();
   float difference = static_cast<float>(t2) - static_cast<float>(t1);
   cout << "\nTime taken for Push: " << difference << " ms" << endl;
   cout << "\n";

   t1 = clock();
   // Pop three values 
   for (int k = 1; k <= 3; k++)
   {
      cout << "Pop: ";
      stack.pop(popped_value);
      cout << popped_value << endl;
   }
   t2 = clock();
   difference = static_cast<float>(t2) - static_cast<float>(t1);
   cout << "\nTime taken for Pop: " << difference << " ms" << endl;
   cout << "\n";
   // Stack is now empty, a pop will cause an exception
   try
   {
      cout << "\nAttempting to pop again... ";
      stack.pop(popped_value);
   }
   catch (DynIntStack::Underflow)
   {
      cout << "Underflow exception occured.\n";
   }
   cin.get();
   cin.get();
   return 0;
}