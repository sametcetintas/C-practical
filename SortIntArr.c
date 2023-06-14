#include <stdio.h>

void SortIntArr(int Arr[], int size);

int main()
{
   int size;

   printf("Dizinin eleman sayısını girin: ");
   scanf("%d", &size);

   int Arr[size];

   printf("Dizinin elemanlarını girin:\n ");

   for( int a = 0; a < size ; a++)
   {
       printf("Eleman %d: ", a+1);

       scanf("%d", &Arr[a]);
   }

   SortIntArr(Arr , size );

   printf("Dizinin sıralanmış hali:\n");

   for(int c = 0; c < size ; c++)
   {
       printf("%d ", Arr[c]);
   }

   printf("\n");

   return 0;

}

void SortIntArr(int Arr[], int size)
{
    for ( int i = 0; i < size -1 ; i++)
    {
        for( int j = 0; j < size - i - 1;j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                int temp = Arr[j];
                
                Arr[j] = Arr[j+1];

                Arr[j + 1]=temp;

            }
        }
    }
}
