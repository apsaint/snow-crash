/*
*  Ce script permet de modifier la string envoye en parametre.
*  On decale chaque caractere de x lettre ou x est la position du caractere dans la string.
*/

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int main(int ac, char **av)
{
        char *file = av[1];
        int fp;
        int i = 0;

        fp = open(file, O_RDONLY);
        read(fp, str, 25);
        while(i < 25)
        {
                printf("%c", str[i] - i);
                i++;
        }
        printf("\n");
}
