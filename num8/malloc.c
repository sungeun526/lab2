/* testmalloc.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
        int max, i,j,m;
        int *ptr1, *ptr2, *ptrsum;

        printf("How many elements are there in both arrays?");
        scanf("%d",&max);

        ptr1 = (int *)malloc(max * sizeof(int));
        ptr2 = (int *)malloc(max * sizeof(int));
        ptrsum = (int *)malloc(max * sizeof(int));

        if ((ptr1 == NULL) && (ptr2 == NULL)){
                printf("Failed to allocate memory.");
                exit(-1);
        }

        printf("Enter the first array list.\n");
        for( i = 0; i < max; i++ )
                scanf("%d", &ptr1[i]);

        printf("Enter the second array list.\n");
        for( i = 0; i < max; i++ )
                scanf("%d", &ptr2[i]);

        for( i = 0; i < max; i++ )
                ptrsum[i] = ptr1[i] + ptr2[i];

        printf("List of two values added:");
        for( i = 0; i < max; i++ )
                printf("%d ", *(ptrsum+i));
        printf("\n");
        free((int *)ptr1);
	free((int *)ptr2);
	free((int *)ptrsum);
}
