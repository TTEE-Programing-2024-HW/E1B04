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
    while(1)
{
	printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. ���X�����T����             /\n");
    printf("/   b. ��ܭ��k��                 /\n");
    printf("/   c. ����                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
    char c,input;
    printf("�п�J�@�Ӧr��\n");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='A'||c=='a')
    {
    	system("CLS");
    	printf("�п�J�r��a~n\n");
    	fflush(stdin);
    	scanf("%c",&input);
    	if(input<'a'&&input>'n')
    	{
    		printf("���~�A�Э��s��J");
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
