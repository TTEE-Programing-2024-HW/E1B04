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
    printf("+++++++++++++++++++++++++++++++++++\n");
    printf("/   a. ���X�����T����             /\n");
    printf("/   b. ��ܭ��k��                 /\n");
    printf("/   c. ����                       /\n");
    printf("+++++++++++++++++++++++++++++++++++\n");
    
	return 0;
} 
