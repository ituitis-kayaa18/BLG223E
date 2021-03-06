#pragma once
#include "phone_record.h"

struct PhonebookFile{
	const char *filename;
	FILE *phonebook;
	void create();
	void close();
	void add(Phone_Record *);
	int search(char []);
	void remove(int recordnum);
	void update(int recordnum, Phone_Record *);
};
