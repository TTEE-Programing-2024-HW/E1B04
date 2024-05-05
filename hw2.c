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
    while(1)
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. 劃出直角三角形             /\n");
    printf("/   b. 顯示乘法表                 /\n");
    printf("/   c. 結束                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    char c,input;
    printf("請輸入一個字元\n");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='A'||c=='a')
    {
    	system("CLS");
    	printf("請輸入字元a~n\n");
    	fflush(stdin);
    	scanf("%c",&input);
    	if(input<'a'&&input>'n')
    	{
    		printf("錯誤，請重新輸入");
    		return 1;
		}
		int height=input-'a'+1;
		int i,j,k;
		for(i=1;i<=height;++i)
		{
			for(j=0;j<height-i;++j)
			{
				printf(" ");
			}
			for(k=0;k<i;++k)
			{
				printf("%c",input-k);
			}
			printf("\n");
		}
	}
}
	return 0;
} 
