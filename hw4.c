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
        if (k >= 5 && k <= 10) {
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
        printf("Math score: %.1f\n", students[i].math);
        printf("Physics score: %.1f\n", students[i].physics);
        printf("English score: %.1f\n", students[i].english);
        printf("Average score: %.1f\n\n", students[i].average);
    }
    printf("Press any key to return to the main menu...");
    getchar();  // 等待按下任意鍵
    getchar();  // 因為上面輸入的數字還有一個殘留的換行符
    system("CLS");
}
void C(Student *students, int n) {
    system("CLS");
    char search_name[50];
    printf("Enter the name of the student to search: ");
    scanf("%s", search_name);

    int found = 0;
    int i;
	for ( i = 0; i < n; ++i) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("Student found:\n");
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("Math score: %.1f\n", students[i].math);
            printf("Physics score: %.1f\n", students[i].physics);
            printf("English score: %.1f\n", students[i].english);
            printf("Average score: %.1f\n", students[i].average);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }

    printf("Press any key to return to the main menu...");
    getchar();  // 等待按下任意鍵
    getchar();  // 因為上面輸入的數字還有一個殘留的換行符
    system("CLS");
}
int compare(const void *a, const void *b) {
    float avgA = ((Student *)a)->average;
    float avgB = ((Student *)b)->average;
    return (avgA < avgB) - (avgA > avgB);  // 由大到小排序
}
void D(Student *students, int n) {
    system("CLS");
    int i;
    qsort(students, n, sizeof(Student), compare);
    printf("Students sorted by average score:\n");
    for ( i = 0; i < n; ++i) {
        printf("Name: %s, ID: %d, Average score: %.1f\n", students[i].name, students[i].id, students[i].average);
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
			case 'c':{
				if (students == NULL) {
                	printf("No student data available. Please enter student data first.\n");
                	printf("Press any key to return to the main menu...");
                	getchar();
                	getchar();
            	} 
				else {
                	C(students, n);
                	system("PAUSE");
    				system("CLS");
    				break;
            	}
			}
			case 'd':{
				if (students == NULL) {
                	printf("No student data available. Please enter student data first.\n");
                	printf("Press any key to return to the main menu...");
                	getchar();
                	getchar();
            	} 	
				else{
                	D(students, n);
					break;
            	}				
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
//這次依然是很複雜的程式，並且還要用含式及陣列展示，又將難度上調，不過終於還是打出來了。 
