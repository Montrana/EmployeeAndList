// ListSol.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Montana Nicholson
// Date: June 23, 2023
// This project is an example of a single linked list class
// Unfortunately, I am getting this error: Severity	Code	Description	Project	File	Line	Suppression State
// Error LNK2019 	unresolved external symbol "public: __cdecl Single_Linked_List<int>::Single_Linked_List<int>(void)" (? ? 0 ? $Single_Linked_List@H@@QEAA@XZ) referenced in function main
// or something similar for any line that I do something with the linked list class, and I'm not sure what I need to do.

#include <iostream>
#include "Single_Linked_List.h"

int main()
{
    Single_Linked_List<int> linked_list = Single_Linked_List<int>();
    linked_list.push_front(11);
    linked_list.push_front(52);
    linked_list.push_back(17);
    linked_list.print();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
