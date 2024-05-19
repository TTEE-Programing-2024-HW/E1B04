#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i, j, k, e, f;

void Seats(char seats[9][9]) {
    printf("  ");
    for ( k = 0; k < 9; ++k) {
        printf("%d ", k + 1);
    }
    printf("\n");
    for (i = 8; i >= 0; --i) {
        printf("%d ", i + 1);
        for (j = 0; j < 9; ++j) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
}

void RandomSeats(char seats[9][9], int numBookings) {
    srand(time(0));
    int booked = 0;
    while (booked < numBookings) {
        int row = rand() % 9;
        int col = rand() % 9;
        if (seats[row][col] == '-') {
            seats[row][col] = '*';
            booked++;
        }
    }
}



int main(void) {
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
    for (i = 0; i < 3; i++) {
        printf("請輸入四位數字密碼\n");
        scanf("%d", &password);
        if (password != 2024) {
            printf("\a\n錯誤\n");
            if (i == 2) {
                return 0;
            }
        } else {
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

    while (1) {
        printf("+++++++++++++++++++++++++++++++++++\n");
        printf("/        Main   menu              /\n");
        printf("/     a. Available seats          /\n");
        printf("/     b. Arrange for you          /\n");
        printf("/     c. Choose by yourself       /\n");
        printf("/     d. Exit                     /\n");
        printf("+++++++++++++++++++++++++++++++++++\n");

        int n, initialized = 0, e = 0, f = 0;
        char input, end;
        printf("請輸入a,b,c,d\n");
        fflush(stdin);
        scanf("%c", &input);
        if (input == 'a') {
            if (!initialized) {
                srand(time(0));
                initialized = 1;
            }
            Seats(seats);
            system("PAUSE");
            system("CLS");
        } else if (input == 'b') {
            printf("請問是1~4位?\n");
            fflush(stdin);
            scanf("%d", &n);
            if (n >= 1 && n <= 3) {
                // Placeholder for arranging seats for the user
            }
        } else if (input == 'c') {
            while (1) {
                printf("請選擇想要的座位 (例如 1-2):\n");
                fflush(stdin);
                scanf("%d-%d", &e, &f);
                if (e >= 1 && e <= 9 && f >= 1 && f <= 9) {
                    if (seats[e - 1][f - 1] == '-' || seats[e - 1][f - 1] == '@') {
                        seats[e - 1][f - 1] = '@';
                        Seats(seats);
                        printf("按任何鍵來確認選擇.\n");
                        system("pause");
                        system("CLS");
                        seats[e - 1][f - 1] = '*';
                        break;
                    } else {
                        printf("座位已被選擇，請重新輸入。\n");
                    }
                } else {
                    printf("格式錯誤，請重新輸入。\n");
                }
            }
        } else if (input == 'd') {
            system("CLS");
            printf("Continue? (y/n)\n");
            fflush(stdin);
            scanf("%c", &end);
            if (end == 'Y' || end == 'y') {
                printf("繼續\n");
                system("PAUSE");
                system("CLS");
            } else if (end == 'N' || end == 'n') {
                printf("結束\n");
                break;
            } else {
                printf("錯誤，請重新輸入\n");
            }
        } else {
            printf("錯誤，請重新輸入\n");
            system("PAUSE");
            system("CLS");
        }
    }

    return 0;
}
