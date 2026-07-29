#include<stdio.h>
int main(){
    int row =3,col=3;
    // printf("Enter the row and col: ");
    // scanf("%d %d",&row,&col);

    char board[row][col];

    printf("Enter the Tic-Tac-Toe board:\n");
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            scanf(" %c",&board[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        if(board[i][0]== board[i][1] && board[i][1]==board[i][2] && board[i][0]!='-'){                  // checks rows
            printf("Winner: %c\n",board[i][0]);
            return 0;
        }
    }
    for(int i=0; i<3; i++){
        if(board[0][i]== board[1][i] && board[1][i]==board[2][i] && board[0][i]!='-'){                  // checks columns
            printf("Winner: %c\n",board[0][i]);
            return 0;
        }
    }

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!='-'){                       // checks diagonal(top left-bottom right)
        printf("Winner: %c\n",board[0][0]);
        return 0;
    }

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!='-'){                       // checks diagonal(top right-bottom left)
        printf("Winner: %c\n",board[0][2]);
        return 0;
    }

    printf("No Winner\n");
    return 0;
}