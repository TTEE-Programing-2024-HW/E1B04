#include<stdio.h>
#include<stdlib.h>

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
	for(i=0;i<3;i++)
	{
	    printf("請輸入四位數字密碼\n");
	    scanf("%d",&password);
	if(password!=2024)  //若密碼不正確 
	{
		printf("\a\n錯誤");
	}  
	else               //若密碼正確  
	{
		printf("歡迎");
		return 0;
	}
	
}
	
} 
