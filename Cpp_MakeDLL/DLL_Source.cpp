#include"stdafx.h"

#include"DLL_Header.h"

using namespace std;

LONG32 loop1(void)
{
	LONG32 v = 0;

	for (int i = 0; i < INT_MAX; i++)
	{
		v++;
	}
	
	return v;
}

void consoleWrite(void)
{
	cout << "ŽŽ‚µ‚Ìo—ÍB" << endl;
}