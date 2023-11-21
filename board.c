#include <stdio.h>
#include <stdlib.h>

#define N_BOARD     15
#define BOARDSTATUS_OK     1
#define BOARDSTATUS_NOK    0

static int board_status[N_BOARD];
static int board_coin[N_BOARD];

static int board_sharkPosition;

{
       
}


int board_initboard(void);
int board_printBoardstatus(void)
 {
    int i;
    printf("------------------BOARD STATUS----------\n");
    for (i=0; i<N_BOARD; i++)
    {
        printf("|");
        if (board_status[i] == BOARD STATUS_NOK)
              printf("X");
        else
              printf("O");
     }
     printf("|\n");
     printf("--------------------------------------------------\n");
     
 }

int board_getBoardstatus(int pos)
{
    return board_status[pos];
}

int board_getBoardcoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
int board_getSharkPosition(void);
int board_stepShark(void);
