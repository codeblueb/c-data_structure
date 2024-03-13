# include <stdio.h>
# include <stdlib.h>
int main()
{

    int *list = malloc(3 * sizeof(int)); // old memory
	if (list == NULL) // checking upper bounds 
    {
        return 1;
    }
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int)); // new allocated memory
    if (tmp == NULL)
    {
        free(list);
        return 1;
        //check to make sure you have old memory
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    free(list); // free the old memory 
    list = tmp; // then make the pointer point to new 
    
    for (int i=0; i < 4; i++)
    {
        printf("> %i ", list[i]);
    }
    
    free(list);
	return 0;
}
