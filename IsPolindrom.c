#include <stdio.h>
#include <string.h>

int IsPolindrom(char *word);

int main()
{
  char word[100];

  printf("Bir kelime girin: ");

  scanf("%s", word);

  if(IsPolindrom(word))
  {
       printf("%s bir polindrom kelimedir.\n", word);
  }

  else
  {
      printf("%s bir polindrom kelime değildir.\n", word);
  }

}

int IsPolindrom(char *word)
{
    int length = strlen(word);
    
    int i, j ;

    for ( i = 0 , j = length - 1; i < j; i++, j--)
    {
        if(word[i]!= word[j])
        {
            return 0;
        }

    }

    return 1;
}
