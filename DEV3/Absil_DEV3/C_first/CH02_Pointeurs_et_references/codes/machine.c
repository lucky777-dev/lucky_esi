#include <string.h>

//code assembleur pour l'appel system execve sur /bin/sh
const char assembly[] = 
	"\x31\xc0\x50\x68//sh\x68/bin"
	"\x89\xe3\x50\x53\x89\xe1\x99"
	"\xb0\x0b\xcd\x80";

int main()
{
	char buffer[sizeof(assembly)];
	strcpy(buffer, assembly);

	void (*f)() = (void (*)())buffer;
	f();
}
