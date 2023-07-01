#pragma once
#include <iostream>
template<typename Item_Type>
class Node
{
public:
	Item_Type data;
	Node* next;

	Node(const Item_Type& data_item, Node* next_ptr = nullptr) {
		data = data_item;
		next = next_ptr;
	}
};

template<typename Item_Type>
class Single_Linked_List
{
private:
	Node<Item_Type>* head;
	Node<Item_Type>* tail;
	int num_items;
public:
	
	/// <summary>
	/// Default constructor for the list
	/// </summary>
	Single_Linked_List();
	
	/// <summary>
	/// Inserts an item to the begining of the list
	/// </summary>
	/// <param name="data">the data to insert</param>
	void push_front(Item_Type data);
	
	/// <summary>
	/// Inserts an item to the end of the list
	/// </summary>
	/// <param name="data">the data to insert</param>
	void push_back(Item_Type data);
	
	/// <summary>
	/// Removes an item from the front of the list
	/// </summary>
	void pop_front();
	
	/// <summary>
	/// Removes an item from the back of the list
	/// </summary>
	void pop_back();
	
	/// <summary>
	/// Gets an item from the front of the list
	/// </summary>
	/// <returns>the item at the front</returns>
	Item_Type front();
	
	/// <summary>
	/// Gets an item from the back of the list
	/// </summary>
	/// <returns>the item at the back</returns>
	Item_Type back();
	
	/// <summary>
	///	evaluates if the list is empty
	/// </summary>
	/// <returns>true if the list is empty</returns>
	bool empty();
	
	/// <summary>
	/// Inserts an item to the designated location of the list
	/// </summary>
	/// <param name="index">the index of the insertion location</param>
	/// <param name="item">the item to insert</param>
	void insert(size_t index, const Item_Type& item);
	
	/// <summary>
	/// removes an item from the list
	/// </summary>
	/// <param name="index">the index of the item to remove</param>
	/// <returns>if the removal was succesful</returns>
	bool remove(size_t index);

	/// <summary>
	/// Attempts to find an item in the list
	/// </summary>
	/// <param name="item">the item to find</param>
	/// <returns>the index of the item, -1 if not found.</returns>
	size_t find(const Item_Type& item);

	/// <summary>
	/// Prints the list
	/// </summary>
	void print();
};