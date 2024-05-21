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
void suggestSeats(char seats[9][9], int numSeats) {
    int row, col, found = 0;
    if (numSeats >= 1 && numSeats <= 3) {
        while (!found) {
            row = rand() % 9;
            col = rand() % (10 - numSeats); // �T�O���������Ƽ� 
            found = 1;
            for ( i = 0; i < numSeats; i++) {
                if (seats[row][col + i] != '-') {
                    found = 0;
                    break;
                }
            }
            if (found) {
                for ( i = 0; i < numSeats; i++) {
                    seats[row][col + i] = '@';
                }
            }
        }
    } else if (numSeats == 4) {
        while (!found) {
            row = rand() % 9;
            col = rand() % (10 - numSeats); // Ensure there's enough space for 4 seats in the row
            if (rand() % 2) { // 50% chance to choose same row or adjacent rows
                found = 1;
                for ( i = 0; i < numSeats; i++) {
                    if (seats[row][col + i] != '-') {
                        found = 0;
                        break;
                    }
                }
                if (found) {
                    for ( i = 0; i < numSeats; i++) {
                        seats[row][col + i] = '@';
                    }
                }
            } else {
                if (row < 8) { // Ensure there's a row below for adjacent row option
                    found = 1;
                    for ( i = 0; i < 2; i++) {
                        if (seats[row][col + i] != '-' || seats[row + 1][col + i] != '-') {
                            found = 0;
                            break;
                        }
                    }
                    if (found) {
                        for ( i = 0; i < 2; i++) {
                            seats[row][col + i] = '@';
                            seats[row + 1][col + i] = '@';
                        }
                    }
                }
            }
        }
    }
}


int main(void) {
    printf("                �i�i�i�i�i�i�i�i            �i�i�i�i�i�i�i�i�i               \n");
    printf("             �i�i�i�i      �i�i�i         �i         �i�i             \n");
    printf("             �i�i          �i�i�i       �i         �i�i�i            \n");
    printf("           �i�i              �i�i�i�i�i�i�i�i             �i�i�i         \n");
    printf("          �i�i                                       �i        \n");
    printf("        �i�i                                          �i�i      \n");
    printf("       �i�i          �i�i�i�i�i          �i�i�i�i�i               �i�i    \n");
    printf("      �i�i           �i�i�i�i�i          �i�i�i�i�i                �i    \n");
    printf("     �i�i            �i�i�i�i�i          �i�i�i�i�i                �i    \n");
    printf("     �i             �i�i�i�i�i          �i�i�i�i�i                �i�i   \n");
    printf("    �i�i                                                  �i   \n");
    printf("    �i                                                   �i   \n");
    printf("    �i                                                   �i   \n");
    printf("   �i                                                    �i�i  \n");
    printf("   �i                                                     �i  \n");
    printf("   �i                                                     �i  \n");
    printf("   �i              �i�i                   �i�i                �i  \n");
    printf("   �i               �i�i                 �i�i                �i�i  \n");
    printf("   �i�i                �i�i�i�i          �i�i�i�i                 �i   \n");
    printf("    �i                �i   �i�i�i�i�i�i�i�i�i�i   �i                �i�i   \n");
    printf("     �i               �i                �i�i              �i�i    \n");
    printf("     �i�i             �i                  �i              �i     \n");
    printf("      �i�i          �i�i                    �i�i          �i�i      \n");
    printf("        �i�i�i�i�i�i�i�i�i�i�i                       �i�i�i�i�i�i�i�i�i�i        \n");
    system("PAUSE");
    
    int password; //�ŧi�K�X 
    for (i = 0; i < 3; i++) {
        printf("�п�J�|��Ʀr�K�X\n");
        scanf("%d", &password);
        if (password != 2024) {
            printf("\a\n���~\n");
            if (i == 2) {
                return 0;
            }
        } else {
            printf("�w��");
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

        int n, initialized = 0;
        char input, end;
        printf("�п�Ja,b,c,d\n");
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
            printf("�аݬO1~4��?\n");
            fflush(stdin);
            scanf("%d", &n);
            if (n >= 1 && n <= 4) {
                suggestSeats(seats, n);
                Seats(seats);
                printf("�O�_���N�o�Ӧw��? (y/n)\n");
                fflush(stdin);
                scanf(" %c", &end);
                if (end == 'Y' || end == 'y') {
                    system("CLS");
                    for ( i = 0; i < 9; i++) {
                        for ( j = 0; j < 9; j++) {
                            if (seats[i][j] == '@') {
                                seats[i][j] = '*';
                            }
                        }
                    }
                } else if(end == 'N' || end == 'n') {
                    system("CLS");
    					for ( i = 0; i < 9; i++) {
        					for ( j = 0; j < 9; j++) {
            					if (seats[i][j] == '@') {
                					seats[i][j] = '-';
                				}
                			}
                		}
                	}
                }
        } else if (input == 'c') {
            while (1) {
                printf("�п�ܷQ�n���y�� (�Ҧp 1-2):\n");
                fflush(stdin);
                e=0,f=0;
				scanf("%d-%d", &e, &f);
                if (e >= 1 && e <= 9 && f >= 1 && f <= 9) {
                    if (seats[e - 1][f - 1] == '-' || seats[e - 1][f - 1] == '@') {
                        seats[e - 1][f - 1] = '@';
                        Seats(seats);
                        printf("��������ӽT�{���.\n");
                        system("pause");
                        system("CLS");
                        seats[e - 1][f - 1] = '*';
                        break;
                    } else {
                        printf("�y��w�Q��ܡA�Э��s��J�C\n");
                    }
                } else {
                    printf("�榡���~�A�Э��s��J�C\n");
                }
            }
        } else if (input == 'd') {
            system("CLS");
            printf("Continue? (y/n)\n");
            fflush(stdin);
            scanf("%c", &end);
            if (end == 'Y' || end == 'y') {
                printf("�~��\n");
                system("PAUSE");
                system("CLS");
            } else if (end == 'N' || end == 'n') {
                printf("����\n");
                break;
            } else {
                printf("���~�A�Э��s��J\n");
            }
        } else {
            printf("���~�A�Э��s��J\n");
            system("PAUSE");
            system("CLS");
        }
    }

    return 0;
}
