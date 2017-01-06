#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	char mesg1[] = "hello, world";
	char mesg2[] = "hello world";
	int pos = 0;

	__asm
	{
		mov ECX, 100
		lea ESI, mesg1
		lea EDI, mesg2
		repe cmpsb
		mov EDX, 100
		sub EDX, ECX
		mov pos, EDX
	}

	setlocale(LC_ALL, "russian");
	cout << "Позиция: " << pos << endl;
	system("pause");
	return 0;
}

