#include"ld_list.h"

namespace faustSpace {
	SList::SList()
	{
		list* node = new list;
		head = new list;
		node = head;
		size = 10;
		for(int i = 0; i < size; i++)
		{
			node->data = i;
			if(i == (size - 1))
				node->next = 0;
			else
				node->next = new list;
			node = node->next;
		}
	}

	SList::SList(int theSize) {
		list* node = new list;
		head = new list;
		node = head;
		size = theSize;
		for(int i = 0; i < size; i++)
		{
			node->data = i;
			if(i == (size - 1))
				node->next = 0;
			else
				node->next = new list;
			node = node->next;
		}
	}

	SList::SList(SList& sample) {
		size = sample.size;
		head = new list;

		list* node = new list;
		node = head;
		list* sNode = new list;
		
		for(sNode = sample.head; sNode != 0; sNode = sNode->next)
		{
			node->data = sNode->data;
			if(sNode->next == 0)
			{
				node = 0;
				break;
			}
			node->next = new list;
			node = node->next;
		}
	}

	SList& SList::operator=(SList& rghtSide) {
		int temp = size;
		for(int i = 0; i < (temp - 1); i++)
			delElem();

		size = rghtSide.size;
		head = new list;
		list* node = new list;
		node = head;
		list* rNode = new list;
		for(rNode = rghtSide.head; rNode != 0; rNode = rNode->next)
		{
			node->data = rNode->data;
			if(rNode->next == 0)
			{	
				node = 0;
				break;
			}
			node->next = new list;
			node = node->next;
		}

		return *this;
	}

	void SList::addElem(int theData) {
		list* node = new list;
		for(node = head; node->next != 0; node = node->next);
		size++;
		node->next = new list;
		node->next->next = 0;
		node->next->data = theData;
	}

	void SList::addElem(int theData, int pos) {
		if(pos > size)
		{
			std::cout << "Error!!! Entered position is bigger than size of list.\n";
			return;
		}

		list* node = new list;
		int i = 0;
		for(node = head; (node->next != 0) && (i < (pos - 1)); node = node->next, i++);
		list* temp = new list;
		temp->next = node->next;
		node->next = temp;
		temp->data = theData;
		size++;
	}

	void SList::replElem(int theData, int pos) {
		if(pos > size)
		{
			std::cout << "Error! Entered position is bigger than size of list.\n";
			return;
		}

		list* node = new list;
		int i = 0;
		for(node = head; (node->next != 0) && (i < (pos - 2)); node = node->next, i++);
		list* temp = new list;
		temp = node->next;
		node->next = temp;
		temp->data = theData;
	}

	void SList::delElem() {
		list* node = new list;
		for(node = head; node->next->next != 0; node = node->next);
		delete node->next->next;
		size--;
		node->next = 0;
	}

	void SList::delElem(int pos) {
		if(pos > size)
		{
			std::cout << "There's such position in the list.\n";
			return;
		}

		list* node = new list;
		int i = 0;
		for(node = head; i < (pos - 2); node = node->next, i++);
		list* temp = new list;
		temp = node->next;
		delete node->next;
		node->next = temp->next;
	}

	void SList::outputList() {
		list* node = new list;

		for(node = head; node != 0; node = node->next)
			std::cout << node->data << " ";

		std::cout << std::endl;
	}

	std::ostream& operator<<(std::ostream& outStream, SList& sample) {
		list* i = new list;
		for(i = sample.head; i != 0; i = i->next)
			outStream << i->data << " ";

		return outStream;
	}

	std::istream& operator>>(std::istream& inStream, SList& sample) {
		list* i = new list;
		for(i = sample.head; i->next != 0; i = i->next);
		int theData;
		inStream >> theData;
		i->next = new list;
		i->next->next = 0;
		i->next->data = theData;
		sample.incSize();

		return inStream;
	}

	void SList::incSize() {
		size++;
	}

	SList::~SList() {
		int temp = size;
		for(int i = 0; i < (temp - 2); i++)
			delElem();
	}
}
