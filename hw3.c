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
    int i;
    for(i=0;i<3;i++){
        printf("�п�J�|��Ʀr�K�X\n");
        scanf("%d",&password);
    if(password!=2024){
        printf("\a\n���~");
        if(i==2){
            return 0;
        }
    }
    else{
        printf("�w��");
        break;
    }
}
system("PAUSE");
system("CLS");
while(1)//�}�l�i�J�D��� 
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. Available seats            /\n");
    printf("/   b. Arrange for you            /\n");
    printf("/   c. Choose by yourself         /\n");
    printf("/   d. Exit                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    char input,end;
    printf("�п�Ja,b,c,d\n");
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
        printf("��J�L�ġC\n");
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
			printf("�~��\n");
			system("PAUSE");
			system("CLS");
		}
		else if(end=='N'||end=='n')
		{
			printf("����\n");
			break;
		}
		else
		{
			printf("���~�A�Э��s��J\n");
			continue;
		}
	}
}
    return 0;
}
