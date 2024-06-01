#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[20];
	int id;
	float math;
	float physics;
	float english;
	float average;
}Student;
void A(Student *students, int *n) {
    int k=0;
    system("CLS");
    printf("Welcome! Please enter an integer between 5 and 10.\n");
    while (1) {
    	printf("Enter the number of students (5-10): ");
        scanf("%d", &k);
        if (k >= 1 && k <= 10) {
            break;
        } 
		else {
            printf("Invalid number. Please enter an integer between 5 and 10.\n");
        }
    }
	int i;
	for ( i = 0; i < k; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        while (1) {
            printf("ID (6-digit integer): ");
            scanf("%d", &students[i].id);
            if (students[i].id >= 000001 && students[i].id <= 999999) {
                break;
            } else {
                printf("Invalid ID. Please enter a 6-digit integer.\n");
            }
        }

        while (1) {
            printf("Math score (0-100): ");
            fflush(stdin);
            scanf("%f", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }

        while (1) {
            printf("Physics score (0-100): ");
            fflush(stdin);
            scanf("%f", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }

        while (1) {
            printf("English score (0-100): ");
            fflush(stdin);
            scanf("%f", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
    (*n)+=k;
};
void B(Student *students, int n) {
    system("CLS");
    int i;
    for ( i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Math score: %d\n", students[i].math);
        printf("Physics score: %d\n", students[i].physics);
        printf("English score: %d\n", students[i].english);
        printf("Average score: %.1f\n\n", students[i].average);
    }
    printf("Press any key to return to the main menu...");
    getchar();  // 等待按下任意鍵
    getchar();  // 因為上面輸入的數字還有一個殘留的換行符
    system("CLS");
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
    
	int i;
    int password;//int password 
	for ( i = 0; i < 3; i++) {
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
	
	Student students[50];
	int n=0;
	while (1) {
        printf("+++++++++++++++++++++++++++++++++++\n");
        printf("/        Main   menu              /\n");
        printf("/     a. Enter student grades     /\n");
        printf("/     b. Display student grades   /\n");
        printf("/     c. Search for student grades/\n");
        printf("/     d. Grade ranking            /\n");
        printf("/     e. Exit system              /\n");
        printf("+++++++++++++++++++++++++++++++++++\n");
        	char input, end;
			printf("請輸入a,b,c,d,e\n");
        	fflush(stdin);
        	scanf("%c", &input);
        switch(input){
			case 'a':{				
    			A(students,&n);
					break;
				}
        	case 'b':{
        		if (students == NULL) {
                printf("No student data available. Please enter student data first.\n");
                printf("Press any key to return to the main menu...");
                getchar();
                getchar();
            } else {
                B(students, n);
                system("PAUSE");
    			system("CLS");
            	}
				break;
			}
        	case 'e':{
				system("CLS");
            	printf("Continue? (y/n)\n");
            	fflush(stdin);
            	scanf("%c", &end);
            	if (end == 'Y' || end == 'y') {
                	printf("繼續\n");
                	system("PAUSE");
                	system("CLS");
            	} 
				else if (end == 'N' || end == 'n') {
                	printf("結束\n");
                	return 0;
            	} 
				else {
                	printf("錯誤，請重新輸入\n");
            	}
			break;
			}
            default:{
            printf("錯誤，請重新輸入\n");
            system("PAUSE");
            system("CLS");
            break;
        	}
		}
	}
	return 0;
}
