#include"d_linked_list.h"

namespace faustSpace {
	DList::DList() {
		size = 10;
		head = new dList;
		head->prev = 0;
		dList* node = new dList;
		node = head;
		dList* pNode = new dList;
		pNode = head;
		for(int i = 0; i < 10; i++)
		{
			node->data = i;
			if(i == 9)
			{
				node->next = 0;
				break;
			}
			node->next = new dList;
			node = node->next;
			node->prev = pNode;
			pNode = node;

		}
	}

	DList::DList(int theSize) {
		size = theSize;
		head = new dList;
		head->prev = 0;
		dList* node = new dList;
		node = head;
		dList* pNode = new dList;
		pNode = head;
		for(int i = 0; i < size; i++)
		{
			node->data = i;
			if(i == (size - 1))
			{
				node->next = 0;
				break;
			}
			node->next = new dList;
			node = node->next;
			node->prev = pNode;
			pNode = node;
		}
	}
	
	DList::DList(DList& sample) {
		size = sample.size;
		head = new dList;
		dList* node = new dList;
		dList* sNode = new dList;
		node->prev = 0;
		node = head;
		dList* pNode = new dList;
		pNode = head;
		for(sNode = sample.head; sNode != 0; sNode = sNode->next)
		{
			node->data = sNode->data;
			if(sNode->next == 0)
			{
				node = 0;
				break;
			}
			node->next = new dList;
			node = node->next;
			node->prev = pNode;
			pNode = node;
		}
	}

	DList& DList::operator=(DList& sample) {
		int temp = size;
		for(int i = 0; i < (temp - 1); i++)
			delElem();
		size = sample.size;
		head = new dList;
		dList* node = new dList;
		dList* sNode = new dList;
		node->prev = 0;
		node = head;
		dList* pNode = new dList;
		pNode = head;
		for(sNode = sample.head; sNode != 0; sNode = sNode->next)
		{
			node->data = sNode->data;
			if(sNode->next == 0)
			{
				node = 0;
				break;
			}
			node->next = new dList;
			node = node->next;
			node->prev = pNode;
			pNode = node;
		}

	}

	void DList::addElem(int theData, int thePos) {
		if(thePos >= size)
		{
			std::cout << "Error!!! The entered position is bigger that size of list\n";
			return;
		}
		dList* node = new dList;
		int i = 0;
		for(node = head; (node->next != 0) && (i < thePos - 1); node = node->next, i++);
		dList* temp = new dList;
		temp->next = node->next;
		node->next = temp;
		temp->prev = node;
		temp->data = theData;
		size++;
	}

	void DList::addElem(int theData) {
		dList* node = new dList;
		for(node = head; node->next != 0; node = node->next);
		node->next = new dList;
		dList* temp = new dList;
		temp = node;
		node = node->next;
		node->prev = temp;
		node->next = 0;
		node->data = theData;

//		node->next->next = 0;
//		node->next->data = theData;
		
		size++;
	}

	void DList::delElem() {
		dList* i = new dList;
		for(i = head; i->next->next != 0; i = i->next);
		delete i->next->next;
		i->next = 0;
		size--;
	}

	void DList::delElem(int thePos) {
		if(thePos >= size)
		{
			std::cout << "Error!!! The entered position is bigger than size of list\n";
			return;
		}
		dList* node = new dList;
		int i = 0;
		for(node = head; (node->next->next != 0) && (i < thePos - 1); node = node->next, i++);
		dList* temp = new dList;
		temp = node->next->next;
		delete node->next;
		node->next = temp;
		size--;
	}

	void DList::delRoot() {
		dList* newRoot = new dList;
		newRoot = head->next;
		delete head;
		head = new dList;
		head = newRoot;
		size--;
	}
	
	std::ostream& operator<<(std::ostream& outStream, DList& sample) {
		dList* i = new dList;
		for(i = sample.head; i != 0; i = i->next)
			outStream << i->data << " ";

		return outStream;
	}

	void DList::revOutput() {
		dList* i = new dList;
		for(i = head; i->next != 0; i = i->next);
		while(i != 0)
		{
			std::cout << i->data << " ";
			i = i->prev;
		}
	}

	void DList::exchange(DList& sample) {
		DList temp;
		temp = sample;
		sample = *this;
		*this = temp;
	}

	DList::~DList() {
		int temp = size;
		for(int i = 0; i < (temp - 1); i++)
			delElem();
		std::cout << "Bye!\n";
	}
}
