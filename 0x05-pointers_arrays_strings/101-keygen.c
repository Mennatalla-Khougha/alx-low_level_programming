#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	  int i = 0, sum = 0;
	    char password[84];

	      srand(time(0));

	        while (sum < 2772)
			  {
				      password[i] = 33 + rand() % 94;
				          sum += password[i];
					      i++;
					        }

		  password[i] = '\0';

		    printf("%s\n",password);
}
