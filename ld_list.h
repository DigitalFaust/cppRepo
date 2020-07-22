#ifndef LD_LIST_H
#define LD_LIST_H

#include<iostream>

namespace faustSpace {
	struct list {
		int data;
		list* next;
	};

	class SList {
	public:
		SList();
		SList(int theSize);
		SList(SList& sample);
		SList& operator=(SList& rghtSide);
		void addElem(int theData);
		void addElem(int theData, int pos);
		void replElem(int theData, int pos);
		void delElem();
		void delElem(int pos);
		void outputList();
		friend std::ostream& operator<<(std::ostream& outStream, SList& sample);
		friend std::istream& operator>>(std::istream& inStream, SList& sample);
		void incSize();
		~SList();
	private:
		list* head;
		int size;
	};
}

#endif //LD_LIST_H
