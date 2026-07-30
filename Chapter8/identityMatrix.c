#define N 10

int main(void)
{
    double id[N][N];
    int row, col;

    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (row == col)
            {
                id[row][col] = 1.0;
            }
            else
            {
                id[row][col] = 0.0;
            }
        }
    }
}

/* 
    double identity[2][2] = {[0][0] = 1.0, [1][1] = 1.0};
*/
