#include <stdio.h>
#include <string.h>

void ReverseText( char *text)
{
  int length = strlen(text);
  for( int i = 0, j = length - 1; i < j; i++ , j--)
  {
    char temp = text[i];
    
    text[i]=text[j]
      
    text[j] = temp;
  }
}

int main()
{
  char text[100];
  printf("enter word");
  fgets(text, sizeof(text), stdin);
  ReverseText(text);
  
  printf("The opposite of the word:%s\n ", text);
  
  return 0;
}
 
