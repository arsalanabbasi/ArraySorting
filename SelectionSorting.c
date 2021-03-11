#include<stdio.h>
#include<conio.h>
int main ()
{
int data[10],i,min,j,temp;
int len_array = sizeof(data)/4;
for (i=0; i < len_array; i++)
    {
    printf("Enter value for %d index: ",i);
    scanf("%d",&data[i]);
    }
for ( i=0; i < len_array - 1; i++)
    {
     min = i;
    for (j= i+1; j < len_array; j++)
        {
        if (data[j] < data[min])
            {
            min = j;
            }
        }
    temp = data[i];
    data[i] = data[min];
    data[min] = temp;
    }

for (i=0; i < len_array; i++)
{
    printf("Sorted Value at %d index: %d\n",i,data[i]);
}

}
