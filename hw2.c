#include<stdio.h>
#include<stdlib.h>

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
    printf("/   a. ���X�����T����             /\n");
    printf("/   b. ��ܭ��k��                 /\n");
    printf("/   c. ����                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    int number;
	char c,input,end;
    printf("�п�J�@�Ӧr��\n");//��ܶi�J�ﶵ 
    fflush(stdin);
    scanf("%c",&c);
    if(c=='A'||c=='a'){//���X�����T���� 
    	system("CLS");
    	printf("�п�J�r��a~n\n");
    	fflush(stdin);
    	scanf("%c",&input);
    	if(input<'a'||input>'n'){
    		printf("���~�A�Э��s��J\n");
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
	else if(c=='B'||c=='b')//���k�� 
	{
		system("CLS");
    	printf("�п�J�r��1~9\n");
    	fflush(stdin);
    	scanf("%d",&number);
    	if(number<1||number>9)
    	{
    		printf("���~�A�Э��s��J\n");
    		continue;
		}
		else{
			int num;
			for(num=1;num<=number;num++){
			printf("%d*%d=%d\n",num,num,num*num);
			}
		}
	}
	else if(c=='C'||c=='c')//�O�_�n���� 
	{
		system("CLS");
		printf("Continue?(y/n)\n");
		fflush(stdin);
		scanf("%c",&end);
		if(end=='Y'||end=='y')
		{
			printf("�~��\n");
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

//�o�����@�~�n�Ϋܦh���j��ӧ���,�ӥB�@���j�馳���D,�]�X�Ӫ����G�N�������@��,���L��j�骺�z�Ѥ]����`�J�F,���M�L�{�·ФS����,�����G�X�Ӫ��e���٬O�ܦ����N�P��,��M,git�٬O�D�`�����ϥ�. 
