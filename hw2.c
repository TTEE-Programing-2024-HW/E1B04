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
    while(1)//開始進入主選單 
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. 劃出直角三角形             /\n");
    printf("/   b. 顯示乘法表                 /\n");
    printf("/   c. 結束                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    int number;
	char c,input,end;
    printf("請輸入一個字元\n");//選擇進入選項 
    fflush(stdin);
    scanf("%c",&c);
    if(c=='A'||c=='a'){//劃出直角三角形 
    	system("CLS");
    	printf("請輸入字元a~n\n");
    	fflush(stdin);
    	scanf("%c",&input);
    	if(input<'a'||input>'n'){
    		printf("錯誤，請重新輸入\n");
    		continue;
		}
		int height=input-'a'+1;
		int i,j,k;
		for(i=1;i<=height;++i){
			for(j=0;j<height-i;++j){
				printf(" ");
			}
			for(k=i;k>0;--k){
				printf("%c",input-k+1);
			}
			printf("\n");
		}
	}
	else if(c=='B'||c=='b')//乘法表 
	{
		system("CLS");
    	printf("請輸入字元1~9\n");
    	fflush(stdin);
    	scanf("%d",&number);
    	if(number<1||number>9)
    	{
    		printf("錯誤，請重新輸入\n");
    		continue;
		}
		else{
			int num;
			for(num=1;num<=number;num++){
			printf("%d*%d=%d\n",num,num,num*num);
			}
		}
	}
	else if(c=='C'||c=='c')//是否要結束 
	{
		system("CLS");
		printf("Continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&end);
		if(end=='Y'||end=='y')
		{
			printf("繼續\n");
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

//這次的作業要用很多的迴圈來完成,而且一旦迴圈有問題,跑出來的結果就完全不一樣,不過對迴圈的理解也比較深入了,雖然過程麻煩又複雜,但成果出來的畫面還是很有成就感的,當然,git還是非常的難使用. 
