#include<stdio.h>
#include <string.h>

void splitString(char* inputString) {

    int len = strlen(inputString);
    int i;

    for (int i = 0; i < len; i++) {
	if (inputString[i] == ' '){
		inputString[i] = ',';
		}
	}
	printf("split words: %s\n", inputString);
}
int main()
{
	char inputString[100];
	printf("Enter a string: ");
	fgets(inputString, sizeof(inputString), stdin);
	splitString(inputString);         
   

    return 0;
}

