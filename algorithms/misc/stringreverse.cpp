#include <stdio.h>
#include <string.h>
char* reverse(char* str) {
	
	if(str == NULL || *str == 0)
	return str;
	
	char* ret = str;
	int len = strlen(str);
	int k = len;
	char* start = str;
	char* end = str + strlen(str) - 1;
	char temp;
    while(end > start) {
    	temp = *start;
		*start = *end;
		*end = temp;
		
		start += sizeof(char);
		end -= sizeof(char);
	}
	return ret;
}

int main() {
	char str[] = "Hello";
	printf( "%s", reverse(str));
	return 0;
}
