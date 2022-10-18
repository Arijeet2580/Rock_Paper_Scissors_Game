#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genramdom(int n)
{
        srand(time(NULL));
        return rand() %n;
        
}
int mandy(char cmove,char pmove)
{
        //returns 1 if c1>c2
        //returns 0 if c1<c2
        //returns -1 if c1=c2
        if(cmove==pmove)
        {
                return -1;
        }
        if (cmove == 'r' && pmove == 's')
        {
              return 1;
        }
        else
            {
              return 0;
            }
        if (cmove == 'p' && pmove == 'r')
        {
              return 1;
        }
        else
        {
              return 0;
        }
        if (cmove == 's' && pmove=='p' )
        {
              return 1;
        }
        else
        {
              return 0;
        }
}
int main()
{
        int move;
        char dict[3]={'r','p','s'};
        char cmove,pmove,name[10];
        int cscore=0,pscore=0;
        printf("hello player please enter your name (within 1-9)words:\n");
        scanf("%s",name);
        printf("Hello %s, \nWELCOME TO ROCK PAER SCISSORS GAME\n",name);
        for(int i=0;i<3;i++)
        {
                //player 's move
                printf("CHOSE\n1 FOR ROCK\n2 FOR PAPER\n3 FOR SCISSORS\n");
                printf("%s 's turn:",name);
                scanf("%d",&move);
                pmove=dict[move-1];
                printf("%s chose :%c\n",name,pmove);
                // computer's move
                printf("computer's turn:\n");
                move=genramdom(3);
                cmove=dict[move];
                printf("computer chose :%c\n",cmove);
                if(mandy(cmove,pmove)==1)
                {
                        printf("computer got this round\n");
                        cscore++;
                }
                else if(mandy(cmove,pmove)==-1)
                {
                        printf("Its a draw round\nboth gets 1 point\n");
                        cscore++;
                        pscore++;
                }
                else
                {
                        printf("%s got this round\n",name);
                        pscore++;
                }
        }
        printf("computer 's score is: %d\n",cscore);
        printf("%s 's score is :%d\n",name,pscore);
        if(cscore>pscore)
        {
                printf("computer win the match\nbetter luck next time player");
        }
        else if(cscore<pscore)
        {
                printf("player win the match\n");
        }
        else
        {
                printf("Its a draw\n");
        }
}