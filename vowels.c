#include<stdio.h>
void main()
{
	char ch;
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
	if (ch == 'A' || ch == 'E' || ch == "I" || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("Vowel");
	else
		printf("Consonant");
	}
	else
		printf("invalid");
}
