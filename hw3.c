#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int i,j;
void Seats(char seats[9][9]) {
    for (i = 8; i >= 0; --i) {
        printf("%d", i + 1);
        for (j = 0; j < 9; ++j) {
            printf("%c", seats[i][j]);
        }
        printf("\n");
    }
}
	void RandomSeats(char seats[9][9]) {
    // Seed the random number generator
    srand(time(0));

    for (i = 0; i < 9; ++i) {
        int random = rand() % 9;
        seats[i][random] = '*';
    }
}	
int main(void){
    printf("                ████████            █████████               \n");
    printf("             ████      ███         █         ██             \n");
    printf("             ██          ███       █         ███            \n");
    printf("           ██              ████████             ███         \n");
    printf("          ██                                       █        \n");
    printf("        ██                                          ██      \n");
    printf("       ██          █████          █████               ██    \n");
    printf("      ██           █████          █████                █    \n");
    printf("     ██            █████          █████                █    \n");
    printf("     █             █████          █████                ██   \n");
    printf("    ██                                                  █   \n");
    printf("    █                                                   █   \n");
    printf("    █                                                   █   \n");
    printf("   █                                                    ██  \n");
    printf("   █                                                     █  \n");
    printf("   █                                                     █  \n");
    printf("   █              ██                   ██                █  \n");
    printf("   █               ██                 ██                ██  \n");
    printf("   ██                ████          ████                 █   \n");
    printf("    █                █   ██████████   █                ██   \n");
    printf("     █               █                ██              ██    \n");
    printf("     ██             █                  █              █     \n");
    printf("      ██          ██                    ██          ██      \n");
    printf("        ███████████                       ██████████        \n");
    system("PAUSE");
    
    int password; //宣告密碼 
    int i;
    for(i=0;i<3;i++){
        printf("請輸入四位數字密碼\n");
        scanf("%d",&password);
    if(password!=2024){
        printf("\a\n錯誤");
        if(i==2){
            return 0;
        }
    }
    else{
        printf("歡迎");
        break;
    }
}
system("PAUSE");
system("CLS");
while(1)//開始進入主選單 
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. Available seats            /\n");
    printf("/   b. Arrange for you            /\n");
    printf("/   c. Choose by yourself         /\n");
    printf("/   d. Exit                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    char input,end;
    printf("請輸入a,b,c,d\n");
    fflush(stdin);
    scanf("%c",&input);
    if(input=='a'){
    	system("CLS");
    char seats[9][9] = {
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-', '-'},
		};
    RandomSeats(seats);
    	if (input == 'a') {
        Seats(seats);
        system("PAUSE");
		system("CLS");
		} 
		else {
        printf("輸入無效。\n");
		}
	}
	else if(input == 'b'){
	}
	else if(input == 'c'){ 
	}
	else if(input == 'd'){system("CLS");
		printf("Continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&end);
		if(end=='Y'||end=='y')
		{
			printf("繼續\n");
			system("PAUSE");
			system("CLS");
		}
		else if(end=='N'||end=='n')
		{
			printf("結束\n");
			break;
		}
		else
		{
			printf("錯誤，請重新輸入\n");
			continue;
		}
	}
}
    return 0;
}
