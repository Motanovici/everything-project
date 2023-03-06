
// include
#include "../include/Everything.h"
#include "../ipc/Everything_IPC.h"

// return copydata code
#define _EVERYTHING_COPYDATA_QUERYREPLY		0

#define _EVERYTHING_MSGFLT_ALLOW		1

int main()
{

	Everything_SetSearch("vimrc");
	Everything_Query(TRUE);


	return 0;
}