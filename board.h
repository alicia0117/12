
#define BOARDSTATUS_OK     1
#define BOARDSTATUS_NOK    0

int board_initboard(void);
int board_printBoardstatus(void);

int board_getBoardstatus(int pos);
int board_getBoardcoin(int pos);

int board_getSharkPosition(void);
int board_stepShark(void);
