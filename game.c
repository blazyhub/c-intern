#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int userin,userout;

    printf("welcome for the game\n");
    printf("enter the choice\n");
    printf("1-Rock\n2-Sicer\n3-Paper\n");
    scanf("%d",&userin);
    if(userin<1 || userin>3){
        printf("invalid input:");
        return 1;
    }
    userout = rand() % 3 + 1;

    printf("computer choice :-");
    switch (userout)
    {
    case 1:
        printf("Rock\n");
        break;

        case 2:
        printf("scissor\n");
        break;
        case 3:
        printf("paper\n");
        break;
    }
    printf("user choice:-");
    switch(userin){
        case 1:
        printf("Rock\n");
        break;

        case 2:
        printf("scissor\n");
        break;
        case 3:
        printf("paper\n");
        break;
    }
    if(userin==userout){
        printf("the game is tie\n");
    
    }else if (userin==1 && userout==2 ||
    userin==2 && userout==3 ||
    userin==3 && userout==1){
        printf("the user is winner");
    }else {
        printf("the computer wins");
    }
    return 0;

}