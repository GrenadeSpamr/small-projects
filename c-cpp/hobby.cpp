#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char hobby[50];

    printf("\nWhat\'s your favourite hobby? ");
    scanf("%50[0-9a-zA-Z ]", &hobby); // Taken from the net, supposedly allows support for spaces.

    strlwr(hobby);

    printf("\n\n You must be good at %s, keep it up! ", &hobby);
    getch();
    return 0;
}
