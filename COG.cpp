#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int number, guess, nguesses = 1;
int i, a[10], n = 0;
void kbc();
int guesstn();
int ttt();
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkwin();
void board();
int main()
{
    int j;
    while (1)
    {
        printf("\t\t\t--------CATALOGUE-------\n");
        printf("\t\t\t1.KBC\n");
        printf("\t\t\t2.GUESS THE NUMBER\n");
        printf("\t\t\t3.TIC TAC TOE\n");
        printf("\t\t\t4.EXIT\n");
        printf("\t\t\t------------------------\n");
        printf("ENTER YOUR CHOICE\n");
        scanf("%d", &j);
        switch (j)
        {
        case 1:
            kbc();
            break;
        case 2:
            guesstn();
            break;
        case 3:
            ttt();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n INVALID CHOICE\n");
            break;
        }
    }
    return 0;
}
int guesstn()
{
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
void kbc()
{
    printf("WELCOME TO THE GAME"
           "KAUN BANEGA CROREPATHI\n\n"
           "It contains10 QUESTIONS each carries 10rupees\n\n\n");
    for (i = 1; i <= 10; i++)
    {
        n = 0;
        switch (i)
        {
        case 1:
            printf("In what direction muslim pray\n 1.East\n 2.South\n 3.Nearby Mosque's direction\n 4.Mecca's direction\n ");
            scanf("%d", &n);
            if (n == 4)
            {
                printf("You have entered the correct answer\n Now you have won Rs.%d00000\n Your Next Question is\n ", i);
            }
            else
            {
                printf(" You have entered the wrong answer\n --Better Luck Next Time-- \nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
            }
            break;
        case 2:
            printf("Who is the Mother of RAMA in Ramayana\n 1.Kousalya\n 2.Kaikai\n 3.Sumitra\n 4.Mantra\n ");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("You have entered the correct answer\n Now you have won Rs.%d00000\n Your Next Question is\n ", i);
            }
            else
            {
                printf(" You have entered the wrong answer \n--Better Luck Next Time--\n You have earned Rs.%d00000\n", i - 1);
                i = 11;
            }
            break;
        case 3:
            printf("What is the Symbol of Nazis(Army of Great Hitler)\n 1.Cross\n 2.Skull and Bones\n 3.Owl\n 4.Swastika\n ");
            scanf("%d", &n);
            if (n == 4)
            {
                printf("You have entered the correct answer\n Now you have won Rs.%d00000\n Your Next Question is\n ", i);
            }
            else
            {
                printf(" You have entered the wrong answer \n--Better Luck Next Time--\n You have earned Rs.%d00000", i - 1);
                i = 11;
            }
            break;
        case 4:
printf("Who among these is not an Railway Minister\n 1.Mamtha Banerjee\n 2.Lal Bahadur Shastri\n 3.Geetha Mukerjee\n 4.George Fernandis\n ");
scanf("%d",&n);
if(n==3)
{
                printf("You have entered the correct answer \nNow you have won Rs.%d00000 \nYour Next Question is\n ", i);
}
else
{
                printf(" You have entered the wrong answer\n --Better Luck Next Time--\n You have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 5:
printf("Who Correctly Answered to Yaksha's Questions \n1.Drona \n2.Abimanyu \n3.Yudishtira \n4.Arjuna\n");
scanf("%d",&n);
if(n==3)
{
                printf("You have entered the correct answer\nNow you have wonRs.%d00000\nYour Next Question is\n", i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime--\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 6:
printf("Who Heads Reserve Bank of India\n1.FinanceMinister\n2.Commissioner\n3.Chief Bank Manager\n4.Governor\n"
);
scanf("%d",&n);
if(n==4)
{
                printf("You have entered the correct answer\nNow you have wonRs.%d00000\nYour Next Question is\n", i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 7:
printf("Which of these AnimalsLaughs\n1.Monkey\n2.Tiger\n3.Hyna\n4.Elephant\n");
scanf("%d",&n);
if(n==4)
{
                printf("You have entered the correct answer\nNow you have wonRs.%d00000\nYour Next Question is\n", i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime--\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 8:
printf("Which is the system of Governance inChina\n1.communism\n2.communalism\n3.Monarchy\n4.Democratic\n");
scanf("%d",&n);
if(n==1)
{
                printf("You have entered the correct answer\nNow you have wonRs.%d00000\nYour Next Question is\n", i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime--\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 9:
printf("How many Rings does Olympic Symbolhave\n1.3\n2.2\n3.6\n4.5\n");
scanf("%d",&n);
if(n==4)
{
                printf("You have entered the correct answer\nNow you have wonRs.%d00000\nYour Next Question is\n", i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime--\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
case 10:
printf("Who patronised Kalidas\n1.Akbar\n2.Chandra Guptha\n3.VikramaAditya\n4.Krishna Devaraya\n");
scanf("%d",&n);
if(n==3)
{
printf("You have entered the correct answer\nNow you have wonRs.%d00000\n *****YOU HAVE BECOME CROREPATI OF THIS WEEK*****",i);
}
else
{
                printf("You have entered the wrong answer\n--Better Luck NextTime--\nYou have earned Rs.%d00000\n", i - 1);
                i = 11;
}
break;
default:
break;
        }
    }
}
int ttt()
{
    int player = 1, i, choice;
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 1 && square[1] == '1')
square[1] = mark;
        else if (choice == 2 && square[2] == '2')
square[2] = mark;
        else if (choice == 3 && square[3] == '3')
square[3] = mark;
        else if (choice == 4 && square[4] == '4')
square[4] = mark;
        else if (choice == 5 && square[5] == '5')
square[5] = mark;
        else if (choice == 6 && square[6] == '6')
square[6] = mark;
        else if (choice == 7 && square[7] == '7')
square[7] = mark;
        else if (choice == 8 && square[8] == '8')
square[8] = mark;
        else if (choice == 9 && square[9] == '9')
square[9] = mark;
        else
        {
printf("Invalid move ");
player--;
// getch();
        }
        i = checkwin();
        player++;
    } while (i == -1);
    board();
    if (i == 1)
        printf("==>\a CONGRATULATIONS!!\nPlayer %d Wins ", --player);
    else
        printf("==>\aGame draw");
    // getch();
    return 0;
}
int checkwin()
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
             square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}
void board()
{
    system("cls");
    printf("\n\n\t**TIC TAC TOE**\n\n");
    printf("PLAYER 1 (X) - PLAYER 2 (O)\n\n\n");
    printf(" | | \n");
    printf(" %c | %c | %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf(" | | \n");
    printf(" %c | %c | %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf(" | | \n");
    printf(" %c | %c | %c \n", square[7], square[8], square[9]);
    printf(" | | \n\n");
}