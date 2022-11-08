#include <iostream>
#include <string.h>
#include "BLOG.h"
#pragma warning(disable:4996)
int main()
{
	char name[] = "About me";
	char line[100];
	BLOG* b1 = new BLOG(name, 1000);
	strcpy_s(b1->text, "Hey there im Bar\n");
	strcpy_s(line, "I play video games\n");
	b1->AddLine(line);
	strcpy_s(line, "I have a big clan in one of them \n");
	b1->AddLine(line);
	strcpy_s(line, "My biggest hobby is baking\n");
	b1->AddLine(line);
	strcpy_s(line, "my favorite dessert is cheese cake\n");
	b1->AddLine(line);
	b1->SaveInFile();
	strcpy_s(b1->text, "");
	strcpy_s(b1->text, b1->LoadFromFile());
	b1->Print();
	return 0;
}