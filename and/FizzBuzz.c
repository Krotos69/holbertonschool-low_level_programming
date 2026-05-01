#include <stdio.h>

void fizz_buzz(int n)
{
        int i;
        for (i = 1; i <= n; i++)
        {
                if (i % 3 == 0 && i % 5 == 0)
                        printf("FizzBuzz\n");
                else if (i % 3 == 0)
                        printf ("Fizz\n");
                else if (i % 5 == 0)
                        printf ("Buzzz\n");
                else
                        printf ("%d\n", i);
        }
}
int main(void)
{
		fizz_buzz(100);
		return (0);
}