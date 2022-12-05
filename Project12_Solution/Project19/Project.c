#include <stdio.h>
#include <Windows.h>

DWORD WINAPI ThreadFunc()
{
	int n = 1;
	Sleep(1000);

	printf("Printing from Thread\n");

	return 0;
}


int main()
{	
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
	if (thread)
		WaitForSingleObject(thread, INFINITE);
	return 0;
}