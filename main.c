#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int n,temps_execution;
int main()
//time_t t;
{
    FILE* fichier = NULL;
    fichier = fopen("test.txt", "w");
//	srand((unsigned) time(&t));
	printf("Donner le nombre de processus souhaiter");
	scanf("%d",&n);

    for (int i=1;i<n+1;i++)
	{
	temps_execution = rand() %10 ;
	temps_depart = rand() %10 ; 
	printf("%d\n", temps_execution);
	fprintf(fichier,"%d | %d\n",temps_execution,temps_depart);

	}

    printf ("L'identifiant du processus est %d\n", (int) getpid ());
    fclose(fichier);
    return 0;
}
