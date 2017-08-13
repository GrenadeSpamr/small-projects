#include <stdio.h>
#include <string.h>

int main(void)
{
    int rows = 7, space, a, b;
    int choice;
    char password[6];
    char *stars = "**********";

    start:
    printf("Password: ");
    fgets(password, 6, stdin);

    if (strcmp(password, "IT10B") == 0)
    {
        goto shapes;
    }

    else
    {
        puts("Invalid password.\n");
        goto start;
    }

    shapes:
    printf("\n[0] Exit\nShapes:\n[1] Pyramid\n[2] Inverted Pyramid\n[3] Diamond\n\nChoice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1 : puts("\nPyramid: "); goto pyramid; break;
        case 2 : puts("\nInverted Pyramid: "); goto invpyra; break;
        case 3 : puts("\nDiamond: "); goto diamond; break;
        case 0 : puts("\nExiting..."); return 0;
        default : printf("Invalid choice.\n"); goto shapes;
    }

    pyramid:
    space = rows - 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space ; a++ )
			printf(" ");
		space--;
		for ( a = 1 ; a <= 2*b-1 ; a++)
			printf("*");
		printf("\n");
	}
	goto shapes;

    invpyra:
    space = 1;
	for ( b = 1 ; b <= rows - 1 ; b++ ) {
		for ( a = 1 ; a <= space; a++)
			printf(" ");
		space++;
		for ( a = 1 ; a <= 2*(rows-b)-1 ; a++ )
			printf("*");
		printf("\n");
	}
	goto shapes;

    diamond:
    space = rows - 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space ; a++ )
			printf(" ");
		space--;
		for ( a = 1 ; a <= 2*b-1 ; a++)
			printf("*");
		printf("\n");
	}

	space = 1;
	for ( b = 1 ; b <= rows - 1 ; b++ ) {
		for ( a = 1 ; a <= space; a++)
			printf(" ");
		space++;
		for ( a = 1 ; a <= 2*(rows-b)-1 ; a++ )
			printf("*");
		printf("\n");
	}
	goto shapes;

    getchar();
    exit:
    return 0;
}
