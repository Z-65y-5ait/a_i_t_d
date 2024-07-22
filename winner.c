#include <stdio.h>
#include <stdbool.h>


void printBoard(){
    char board[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c|%c|%c\n",board[0][0],board[0][1],board[0][2]);
            printf("--|--|--\n");
            printf("%c|%c|%c\n",board[1][0],board[1][1],board[1][2]);
            printf("--|--|--\n");
            printf("%c|%c|%c\n",board[2][0],board[2][1],board[2][2]);

        }
    }
}
void saisie_des_joueurs(){
    int i,j;
    char choice1,choice2;
    char board[3][3];
    printf("enter one caracter btw X and O:");
    scanf("%c",&choice1);
    if(choice1=='X'){
        choice2='O';
    }
    else{
        choice1='O';
        choice2='X';
    }
    int role=0;
    do{
        bool gamer1=true;
        while (gamer1==true){
            do{
                printf("gamer1:\n");
                printf("enter two numbers btw 0 and 2:");
                scanf("%d %d",&i,&j);
            } while (i>3 || i<0 || j>3 || j<0 || board[i][j]=='X' ||board[i][j]=='O');
            board[i][j]=choice1;
            gamer1=false;
        }
        bool gamer2=true;
        while (gamer2==true){
            do{
                printf("gamer1:\n");
                printf("enter two numbers btw 0 and 2:");
                scanf("%d %d",&i,&j);
            } while (i>3 || i<0 || j>3 || j<0 || board[i][j]=='X' ||board[i][j]=='O');
            board[i][j]=choice2;
            gamer2=false;
            gamer1=true;
        }
        role++;
    }while(role<=4);
}

int verify(){
    char board[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (board[i] == 'X') {
                printf("gamer1 won\n");
                return 1;
            } else {
                if (board[j] == 'X') {
                    printf("gamer1 won\n");
                    return 1;
                }
            }
            if (board[i] == 'O') {
                printf("gamer2 won\n");
                return 2;
            } else {
                if (board[j] == 'O') {
                    printf("gamer2 won\n");
                    return 2;
                }
            }
            if(i==j){
                if(board[i][j]=='X'){
                    printf("gamer1 won\n");
                    return 1;
                }
                if(board[i][j]=='O'){
                    printf("gamer2 won\n");
                    return 2;
                }
            }
            if(i+j==2){
                if(board[i][j]=='X'){
                    printf("gamer1 won\n");
                    return 1;
                }
                if(board[i][j]=='O'){
                    printf("gamer2 won\n");
                    return 2;
                }
            }
        }
    }
    return 0;
}

int main(){
    int r;
    printBoard();
    if(verify()==1){
        printf("gamer1 won\n");
    }
    else if(verify()==2){
        printf("gamer2 won\n");
    }
    else{
        printf("it's a draw\n");
    }
    printf("do u want to replay:\n");
    printf("1.OUI\n");
    printf("2.NON\n");
    scanf("%d",&r);
    switch (r) {
        case 1:
            saisie_des_joueurs();
            break;
        case 2:
            printf("until the next time!!\n");
            break;
        default:
            printf("please enter a number 1 or 2:\n");
    }
    return 0;
}
