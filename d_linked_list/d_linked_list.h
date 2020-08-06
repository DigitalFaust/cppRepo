#ifndef D_LINKED_LIST_H
#define D_LINKED_LIST_H

#include<iostream>

namespace faustSpace {
	struct dList {
		int data;
		dList* next;
		dList* prev;
	};

	class DList {
	public:
		DList();
		DList(int theSize);
		DList(DList& sample);
		DList& operator=(DList& sample);
		void addElem(int theData, int thePos);
		void addElem(int theData);
		void delElem();
		void delElem(int thePos);
		void delRoot();
		friend std::ostream& operator<<(std::ostream& outStream, DList& sample);
		void revOutput();
		void exchange(DList& sample);
		~DList();
	private:
		dList* head;
		int size;
	};
}

#endif //D_LINKED_LIST_H
