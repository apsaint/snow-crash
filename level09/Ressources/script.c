/*
*  Ce script permet de modifier la string envoye en parametre.
*  On decale chaque caractere de x lettre ou x est la position du caractere dans la string.
*/

# include <stdio.h>
# include <string.h>

int main(int ac, char **av)
{
        char *codeCrypt = av[1];
        int i = 0;
        int c;

        while(codeCrypt[i])
        {
                c = codeCrypt[i];
                c -= i;
                printf("%c", c);
                i++;
        }
}
