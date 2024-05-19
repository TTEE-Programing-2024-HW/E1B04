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
	void RandomSeats(char seats[9][9], int numBookings) {
    // Seed the random number generator
    srand(time(0));

    int booked = 0;
    while (booked < numBookings) {
        int row = rand() % 9;
        int col = rand() % 4;
        if (seats[row][col] == '-') {
            seats[row][col] = '*';
            booked++;
        }
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
        printf("\a\n錯誤\n");
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
	RandomSeats(seats, 10);
while(1)//開始進入主選單 
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/        Main   menu              /\n");
	printf("/     a. Available seats          /\n");
    printf("/     b. Arrange for you          /\n");
    printf("/     c. Choose by yourself       /\n");
    printf("/     d. Exit                     /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    int n;
	char input,end,initialized = 0;
    printf("請輸入a,b,c,d\n");
    fflush(stdin);
    scanf("%c",&input);
    if (input == 'a') {
            if (!initialized) {
                // Seed the random number generator
                srand(time(0));
                // Generate random seats once
                initialized = 1;
            }
            Seats(seats);
            system("PAUSE");
			system("CLS");
    } 
	else if(input == 'b'){
		printf("請問是1~4位?\n");
		scanf("%d",&n);
		if(n>=1||n<=3){
			
		}
	}
	else if(input == 'c'){ 
	}
	else if(input == 'd'){
		system("CLS");
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
	else{
		printf("錯誤，請重新輸入\n");
		system("PAUSE");
		system("CLS");
		continue;
	}
}
    return 0;
}
