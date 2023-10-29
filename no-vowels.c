#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
 if (argc != 2) // Check for correct number of command-line arguments
 {
 printf("Usage: ./no-vowels word\n");
 return 1;
 }

 char *word = argv[1];
 char new[strlen(word)]; // Create new string to store modified word

 for (int i = 0; i < strlen(word); i++)
 {
 switch (word[i])
 {
 case 'a':
 case 'A':
 new[i] = '6';
 break;
 case 'e':
 case 'E':
 new[i] = '3';
 break;
 case 'i':
 case 'I':
 new[i] = '1';
 break;
 case 'o':
 case 'O':
 new[i] = '0';
 break;
 case 'u':
 case 'U':
 new[i] = '9';
 break;
 default:
 new[i] = word[i];
 }
 }

 printf("%s\n", new); // Print modified word

 return 0;
}