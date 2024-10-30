#include <stdio.h>
#include <string.h>


int main() {
  
	int i = 0x41424344; // this is ABCD in ASCII
	int j = 0x42824000; // this would be 65.125 from left to right 0 10000101 00000100100000000000000
	
	printf("\n");	
	printf("ABCD in ASCII: 0x%X\n",i);
	printf("65.125 in IEEE 754 float: 0x%X\n",j);
	float f = 1.0;
	char c;
	printf("Size of int: %lu\n",sizeof(i));
	printf("Size of float: %lu\n",sizeof(f));
	printf("Size of char: %lu\n",sizeof(c));
	char *cp = (char*)&i;	
	printf("Char pointer to ABCD: %c\n",*cp);
	printf("Conclusion: int stored small to big (reversed order)\n");
	memcpy(&f,&j,sizeof(f));
	printf("Memcpy of 0x%X into f gives %f\n",j,f); 
	printf("Conclusion: since int saved in small to big, float is as well.\n");
	printf("\n");	
	
	return 0;
	




}
