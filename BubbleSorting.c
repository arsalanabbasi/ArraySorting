#include<stdio.h>
#include<conio.h>
int main()
{
int arr[10],i,j,temp;
int len_arr = sizeof(arr)/4;

for (i=0; i< len_arr; i++)
    {
    printf("Enter value for %d index: ",i);
    scanf("%d",&arr[i]);
    }

for (i=0; i< len_arr -1 ; i++)
    {
    for (j=0; j< len_arr - i -1; j++)
        {
        if (arr[j] > arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }

for (i=0; i< len_arr; i++)
    {
    printf("New value at %d index = %d\n",i,arr[i]);
    }

}
