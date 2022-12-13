int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int a[], int n, int key) {
int pos = -1;
for (int i = 0; i < n; ++i) {
    if (a[i] == key) {
    pos = i;
    break;
    }
}
return pos;
}

int main() {
int a[] = {8, 12, 3, 4, 7, 2, 13};
int n = sizeof(a) / sizeof(a[0]);
int pos = linearSearch(a, n, 3);
if (pos != 1)
    printf("Key found at position : %d \n", pos);
else
    printf("Key not found \n");
return 0;
}



*/