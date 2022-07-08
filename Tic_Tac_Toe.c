#include <stdio.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int success();
void board();

int main()
{
    int player = 1, i, option;

    char display;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &option);

        display = (player == 1) ? 'X' : 'O';

        if (option == 1 && square[1] == '1')
            square[1] = display;
            
        else if (option == 2 && square[2] == '2')
            square[2] = display;
            
        else if (option == 3 && square[3] == '3')
            square[3] = display;
            
        else if (option == 4 && square[4] == '4')
            square[4] = display;
            
        else if (option == 5 && square[5] == '5')
            square[5] = display;
            
        else if (option == 6 && square[6] == '6')
            square[6] = display;
            
        else if (option == 7 && square[7] == '7')
            square[7] = display;
            
        else if (option == 8 && square[8] == '8')
            square[8] = display;
            
        else if (option == 9 && square[9] == '9')
            square[9] = display;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = success();

        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*********************************************
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/

int success()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


// DRAWING THE BOARD


void board()
{
    system("cls");
    printf("\n\n\tTIC--TAC--Toe\n\n");

    printf("Player 1'S CHAR(X)  -  Player 2'S CHAR (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
