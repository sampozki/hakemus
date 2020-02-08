#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define totuus return(rand() % (10 - 1 + 1) + 1);

int jumala(){totuus;}

int main()
{
    srand(time(0));

    if ( jumala() == 7 ) { printf("hyy-vä\n"); }
    
    else { printf("tapan sut\n"); }

    return 0;
}