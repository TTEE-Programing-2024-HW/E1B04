#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[20];
	int id;
	float math;
	float physics;
	float english;
	float avg;
}Student;
void A(Student *students, int n) {
    int i;
	for ( i = 0; i < n; ++i) {
        printf("Enter data for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        while (1) {
            printf("ID (6-digit integer): ");
            scanf("%d", &students[i].id);
            if (students[i].id >= 100000 && students[i].id <= 999999) {
                break;
            } else {
                printf("Invalid ID. Please enter a 6-digit integer.\n");
            }
        }

        while (1) {
            printf("Math score (0-100): ");
            scanf("%d", &students[i].math);
            if (students[i].math >= 0 && students[i].math <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }

        while (1) {
            printf("Physics score (0-100): ");
            scanf("%d", &students[i].physics);
            if (students[i].physics >= 0 && students[i].physics <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }

        while (1) {
            printf("English score (0-100): ");
            scanf("%d", &students[i].english);
            if (students[i].english >= 0 && students[i].english <= 100) {
                break;
            } else {
                printf("Invalid score. Please enter a score between 0 and 100.\n");
            }
        }
    }
};

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
				int n;
    			system("CLS");
    			printf("Welcome! Please enter an integer between 5 and 10.\n");
    				while (1) {
        				printf("Enter the number of students (5-10): ");
        				scanf("%d", &n);
        				if (n >= 5 && n <= 10) {
            				break;
        				} 
						else {
            				printf("Invalid number. Please enter an integer between 5 and 10.\n");
        				}
    				}
    		Student *students = (Student *)malloc(n * sizeof(Student));
    				if (students == NULL) {
        			printf("Memory allocation failed!\n");
        			return 1;
    				}
    			A(students, n);
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
