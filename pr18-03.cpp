// This program demonstrates the dynamic stack
// class DynIntStack.
#include <iostream>
#include "DynIntStack.h" 
#include <time.h>
using namespace std;

int main()
{
   DynIntStack stack; 
   int popped_value;
   clock_t t1;
   clock_t t2;

   // Push values 5, 10, and 15 on the stack
   t1 = clock();
   for (int value = 0; value < 20; value++)
   {
      cout << "Push: " << value << "\n";
      stack.push(value);
   }
   t2 = clock();
   float difference = static_cast<float>(t2) - static_cast<float>(t1);
   cout << "\nThe time for 20 Push ops: " << difference << " ms" << endl;
   cout << "\n";

   // Pop three values 
   t1 = clock();
   for (int i = 0; i < 20; i++)
   {
	cout << "Pop: ";
     stack.pop(popped_value);
    cout << popped_value << endl;
   }
   t2 = clock();
   difference = static_cast<float>(t2) - static_cast<float>(t1);
   cout << "\nThe time for 20 Pop ops: " << difference << " ms" << endl;
   cout << endl;

   // Stack is now empty, a pop will cause an exception
 
   cin.get();
   cin.get();
   return 0;
}