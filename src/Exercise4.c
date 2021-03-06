/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the broder of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int thickness = atoi(argv[2]);
	//Your codes here
	int i, j, k, m, store;
 
	int space = 2;

	for(i = 0; i < height; i++){
		
		for(j = i; j < height ; j++) printf("  ");
		
		for(k = 0; k < i + 1; k++){
			printf("*");
            printf(" ");

			if(k == thickness - 1 && i < height - thickness)
			{
				if(i > thickness -1) 
				{
					store = space;
					while(space > 0)
					{
						printf(" ");
						space--; 
					}
					space = store + 4; 
				}
				
				break; 
			}	
		}
		
		for(m = 0; m < i; m ++){
			if(i >= 1 && i < height - thickness) 
            {
				
				if(m == thickness) break; 
				printf("*");
                printf(" ");
			}
			else 
            {
                
                printf("*");
                printf(" ");
            }
		}
		
		printf("\n");
	}


	return 0;
}