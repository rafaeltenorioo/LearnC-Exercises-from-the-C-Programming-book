#include <stdio.h>
int main(void)
{

    char chess_board[8][8];

    for (int i = 0; i < 8; i++)
    {

        switch (i)
        {
        case 0:
            for (int j = 0; j < 8; j++)
            {
                switch (j)
                {
                case 0:
                case 7:
                    chess_board[i][j] = 'r';
                    break;
                case 1:
                case 6:
                    chess_board[i][j] = 'n';
                    break;
                case 2:
                case 5:
                    chess_board[i][j] = 'b';
                    break;
                case 3:
                    chess_board[i][j] = 'q';
                    break;
                case 4:
                    chess_board[i][j] = 'k';
                    break;

                default:
                    break;
                }
            }
            break;
        case 1:
            for (int j = 0; j < 8; j++)
            {
                chess_board[i][j] = 'p';
            }
            break;
        case 6:
            for (int j = 0; j < 8; j++)
            {
                chess_board[i][j] = 'P';
            }
            break;
        case 7:
            for (int j = 0; j < 8; j++)
            {
                switch (j)
                {
                case 0:
                case 7:
                    chess_board[i][j] = 'R';
                    break;
                case 1:
                case 6:
                    chess_board[i][j] = 'N';
                    break;
                case 2:
                case 5:
                    chess_board[i][j] = 'B';
                    break;
                case 3:
                    chess_board[i][j] = 'Q';
                    break;
                case 4:
                    chess_board[i][j] = 'K';
                    break;

                default:
                    break;
                }
            }
            break;
        default:
            if (i % 2 == 0)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (j % 2 == 0)
                    {
                        chess_board[i][j] = ' ';
                    }
                    else
                    {
                        chess_board[i][j] = '*';
                    }
                }
            }
            else
            {
                for (int j = 0; j < 8; j++)
                {
                    if (j % 2 == 0)
                    {
                        chess_board[i][j] = '*';
                    }
                    else
                        chess_board[i][j] = ' ';
                    {
                    }
                }
            }

            break;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", chess_board[i][j]);
        }
        printf("\n");
        
    }
    
}
