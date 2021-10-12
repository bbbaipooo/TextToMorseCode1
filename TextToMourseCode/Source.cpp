#include<string.h>
#include<ctype.h>
#include<stdio.h>

int indexOf(char* haystack, char c)
{
	for (int i = 0; i < strlen(haystack); i++)
	{
		if (c == haystack[i])
		{
			return i;
		}
	}
	return -1;
}
void textToMorse(char* msg)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ-";
	const char* m[] = {
		".-",//A-Z
		"-...",
		"-.-.",
		"-..",
		".",
		"..-.",
		"--.",
		"....",
		"..",
		".---",
		"-.-",
		".-..",
		"--",
		"-.",
		"---",
		".--.",
		"--.-",
		".-.",
		"...",
		"-",
		"..-",
		"...-",
		".--",
		"-..-",
		"-.--",
		"--..",
		"-....-"//-
	};
	for (int i = 0; i < strlen(msg); ++ i)
	{
		int position = indexOf(a,toupper(msg[i]));
		if (position != -1)
		{
			printf("%s\n", m[position]);
		}
	}
}
int main()
{
	char msg[]="ENGLISH-CHANGE-TO-MORSE";
	textToMorse(msg);
	return 0;
}