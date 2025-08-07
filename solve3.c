#include<stdio.h>
int main(){
    int X,chance=3,gues1,gues2,gues3;
    int flag=0;
    printf("Player1 choose the Number: ");
    scanf("%d",&X);
    printf("Player-2 gues number :");
    scanf("%d",&gues1);

    if(gues1==X){
        printf("right,player 2 win\n");
        flag=1;
    }else{
        printf("Wrong answer: chance left %d\n",chance-1);
        flag=0;
        printf("player2 geus again : ");
        scanf("%d",&gues2);
        if(gues2==X){
            printf("Right,player-2 win\n");
            flag=1;
        }else{
            printf("wrong,chance left %d\n",chance-2);
            flag=0;
            printf("player-2 gues again : ");
            scanf("%d",&gues3);

            if (gues3==X)
            {
                printf("right,player-2 win\n");
                flag=1;
            }else{
                printf("wrong,chance left : %d\n",chance-3);
                flag=0;
            }

        }
    }
    if (flag==0)
    {
        printf("Player-1 Win\n"); 
    }
    
    return 0;
}

