//MyFile.cpp
#include "std.h"
#include <fstream>

#define FILE_NAME_TEXT	"members.txt"


//text
void MyFile::save(MyArr* parr)
{
	ofstream out(FILE_NAME_TEXT);

	int size = parr->get_size();
		cout << size << endl;

	for (int i = 0; i < parr->get_size(); i++)
	{
		Member* p = (Member*)parr->get_data(i);

		cout << p->Get_Number() << "\t";
		cout << p->Get_Name() << "\t";
		cout << p->Get_Phone() << endl;
		
	}

	out.close();

}

void MyFile::load(MyArr* parr)
{
	ifstream in(FILE_NAME_TEXT);

	int size;
	in >> size;
	for (int i = 0; i < size; i++)
	{
		int number;			in >> number;
		string name;		in >> name;
		string phone;		in >> phone;
		
		Member* p = new Member(number, name, phone);

		parr->push_back(p);
	}

	in.close();
}

