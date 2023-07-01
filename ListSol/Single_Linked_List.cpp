#include "Single_Linked_List.h"
template<typename Item_Type>
inline Single_Linked_List<Item_Type>::Single_Linked_List()
{
	head = nullptr;
	tail = nullptr;
	num_items = 0;
}

template<typename Item_Type>
inline void Single_Linked_List<Item_Type>::push_front(Item_Type data)
{
	Node<Item_Type>* newNode = new Node<Item_Type>(data, head->next);
	if (tail == nullptr)
	{
		head = newNode;
		tail = head;
	}
	else if (head->next == nullptr)
	{
		tail = head;
		head = newNode;
	}
	else if (head->next != nullptr)
	{
		head = newNode;
	}
	num_items++;
}

template<typename Item_Type>
inline void Single_Linked_List<Item_Type>::push_back(Item_Type data)
{
	if (tail != nullptr)
	{
		tail->next = new Node<Item_Type>(data);
		tail = tail->next;
	}
	else
	{
		push_front(data);
	}
	num_items++;
}

template<typename Item_Type>
inline void Single_Linked_List<Item_Type>::pop_front()
{
	if (head == nullptr)
	{
		throw std::invalid_argument("Attempt to call pop_front() on an empty list");
	}
	Node<Item_Type>* removed_node = head;
	head = head->next;
	delete removed_node;
	removed_node = nullptr;
	if (head = nullptr)
	{
		tail = nullptr;
	}
	num_items--;
}

template<typename Item_Type>
inline void Single_Linked_List<Item_Type>::pop_back()
{
	if (tail == nullptr)
	{
		throw std::invalid_argument("Attempt to call pop_back() on an empty list");
	}
	if (head == tail)
	{
		pop_front();
	}
	else if (head != tail)
	{
		Node<Item_Type>* removed_node = tail;
		Node<Item_Type>* iterator = head;

		while (iterator != tail)
		{
			if (iterator->next = tail)
			{
				tail = iterator;
			}
			iterator = iterator->next;
		}
		delete removed_node;
		removed_node = nullptr;
		num_items--;
	}
}

template<typename Item_Type>
inline Item_Type Single_Linked_List<Item_Type>::front()
{
	if (head == nullptr)
	{
		throw std::invalid_argument("Attempt to call front() on an empty list");
	}
	return head->data;
}

template<typename Item_Type>
inline Item_Type Single_Linked_List<Item_Type>::back()
{
	if (tail == nullptr)
	{
		throw std::invalid_argument("Attempt to call back on an empty list");
	}
	return tail->data;
}

template<typename Item_Type>
inline bool Single_Linked_List<Item_Type>::empty()
{
	return (head == nullptr);
}

template<typename Item_Type>
inline void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item)
{
	if (empty())
	{
		push_front(item);
	}
	else if (index >= num_items || index < 0)
	{
		throw std::invalid_argument("Attempt to call remove on an invalid index");
	}

	if (index == 0)
	{
		push_front(item);
	}
	else if (index == num_items - 1)
	{
		push_back(item);
	}
	else {
		Node<Item_Type>* iterator = head;
		size_t i = 0;

		while (i < index)
		{
			if (i++ == index - 1)
			{
				Node<Item_Type>* insert_node = new Node<Item_Type>(item, iterator->next);
				iterator->next == insert_node;
				num_items++;
				break;
			}
			iterator = iterator->next;
		}
	}
}

template<typename Item_Type>
inline bool Single_Linked_List<Item_Type>::remove(size_t index)
{
	if (empty())
	{
		throw std::invalid_argument("Attempt to call remove on an empty list");
	}
	else if (index >= num_items || index < 0)
	{
		throw std::invalid_argument("Attempt to call remove on an invalid index");
	}
	
	if (index == 0)
	{
		pop_front();
		return true;
	}
	else if (index == num_items - 1)
	{
		pop_back();
		return true;
	}
	else {
		Node<Item_Type>* iterator = head;
		size_t i = 0;

		while (i < index)
		{
			if (i++ == index - 1)
			{
				Node<Item_Type>* removed_node = iterator->next;
				iterator->next == iterator->next->next;
				delete removed_node;
				removed_node = nullptr;
				num_items--;
			}
			iterator = iterator->next;
		}
	}
	return false;
}

template<typename Item_Type>
inline size_t Single_Linked_List<Item_Type>::find(const Item_Type& item)
{
	size_t index = 0;
	if (head == nullptr)
	{
		throw std::invalid_argument("Attempt to call find() on an empty list");
	}
	Node<Item_Type>* iterator = head;

	while (iterator != nullptr)
	{
		if (iterator->next->data = item)
		{
			return index;
		}
		iterator = iterator->next;
		index++;
	}
	return -1;
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::print()
{
	Node<Item_Type>* iterator = head;

	while (iterator != nullptr)
	{
		std::cout << iterator->data;
		if (iterator->next != nullptr)
		{
			std::cout << " ==> ";
		}
		iterator = iterator->next;
	}
}
