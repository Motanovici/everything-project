
// Everything IPC test
// this tests the lib and the dll.

#include <iostream>
#include <vector>
using namespace std;

#include "..\include\Everything.h"

struct everythingData
{
	vector<std::string> returnData;
};

void quickEverythingQuery(LPCSTR lpString)
{
	Everything_SetSearch(lpString);
	Everything_Query(TRUE);
}

int main(int argc,char **argv)
{
	everythingData _data{};
	DWORD i;
	
	quickEverythingQuery("vimrc");
		
	for(i=0;i<Everything_GetNumResults();i++)
	{
		_data.returnData.push_back(Everything_GetResultFileName(i));
	}
	for (auto& i : _data.returnData)
		cout << i << endl;
	
	system("pause");
	
	return 0;
}
