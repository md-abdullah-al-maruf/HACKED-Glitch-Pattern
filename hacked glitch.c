#include<stdio.h>
int main()
{
    //getch();
    int lower = 0, upper = 99, count = 1,m=1,n,i,j,num;
    while(1){          //   infinite loop   //
    for(i=0;i<11;i++){
        for(j=0;j<38;j++){
            num = (rand() %(upper - lower + 1)) + lower;
            if(                                                                     //alphabet pattern logic//
               (i>1&&i<9&&j==2)||(i==5&&j>2&&j<6)||((i>1&&i<9&&j==6))                                                    //H
               ||(i>2&&i<9&&j==8)||(i>2&&i<9&&j==12)||((i==5||i==2)&&j>8&&j<12)                                          //A
               ||(i>2&&i<8&&j==14)||(i==2&&j>14&&j<18)||(i==8&&j>14&&j<18)                                               //C
               ||(i>1&&i<9&&j==19)||(i==5&&j==20)||((i==4||i==6)&&j==21)||((i==3||i==7)&&j==22)||(((i==2||i==8)&&j==23)) //K
               ||(i>1&&i<9&&j==25)||((i==2||i==8)&&j>25&&j<30)||(i==5&&(j>25&&j<28))                                     //E
               ||(i>1&&i<9&&j==31)||((i==2||i==8)&&j>31&&j<35)||((i>2&&i<8)&&j==35)                                      //D
               ){
                printf("%02d ", num);
                //printf("@ ");          //you can print any character, if don't work just add or delete space,
            }
            else{
                //printf("%d ", num);                           //  glitch pattern  //
                if(i+j==num||i-j==num||j-i==num||i+10==num){
                    printf(" %d",i);
                }
                else if(i+num==j){
                    printf(" %d",i);
                }
                else
                    printf("   ");
            }
        }
        printf("\n");
    }
    system("cls");                      //    clear screen    //
    }
    return 0;
}
