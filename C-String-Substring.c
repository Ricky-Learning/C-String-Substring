#include <stdio.h>
#include <stdlib.h>
#define LEN 16

char *strmid(char *str,int pos,int len){
	static char str1[100];
	char *ptr=str1;
	int i;
	pos--;
	for(i=pos;i<(pos+len);i++){
		*ptr++ = *(str+i);
}
	*(ptr+len)='\0';
	return str1;
}

char *strright(char *str,int len){
	static char str1[100];
	char *ptr=str;
	int count;
	while(*ptr !='\0')ptr++;
	count = (ptr-str);
	ptr=str1;
	for(int i=(count-len);i<count;i++){
	*ptr++ = *(str+i);
}	
	*(ptr+len+1)='\0';
	return str1;
}

char *strleft(char *str,int len){
	static char str1[100];
	char *ptr=str1;
	for(int i=0;i<=(len-1);i++){
		*ptr++ = *(str+i);
}
	*(ptr+len)='\0';
	return str1;
}
/* �D�{�� */
int main(){
	printf("\n���{���� �B��e �]�p\n\n");
	printf("BASIC �y������ MID$()�BRIGHT$() �M LEFT$() ���r��B�z��ơA�Ф��O�ϥ� C �y�����}�C�P���мg�X�o 3 �Ө�ơA");
	printf("�Ҧp:char string[20] = {This is a book.};\n\n");
	printf("�W�z��ƪ����浲�G�A�p�U�ҥܡG\n");
	printf("a.MID$(string,6,2) �O'is'�A���ެO�q1�}�l�A�N�O�q��m 6 ���X 2 �Ӧr���C\n");
	printf("b.RIGHT$(string,5) �O'book.'�A���X�̥k�䪺 5 �Ӧr���C\n");
	printf("c.LEFT$(string,4) �O'This'�A���X�̥��䪺 4 �Ӧr���C\n");
	printf("�{���]�p���G�p�U�G\n\n");

char str[100]="This is a book.";
printf("8-1 strMid(str, int, int)�G\n");
  printf("�^���e�GStr=%s\n",str);
  printf("�^���� strmid( str , 6 , 2 )�G%s\n\n",strmid(str , 6 , 2 ));

printf("8-2 strRight()�G\n");
  printf("�^���e�GStr=%s\n",str);
  printf("�^���� strRight( str , 5 )�G%s\n\n",strright(str , 5 ));
  
printf("8-3 strLeft()�G\n");
  printf("�^���e�GStr=%s\n",str);
  printf("�^���� strLeft( str , 4 )�G%s\n\n",strleft(str , 4 ));

system("PAUSE");/* �Ȱ� */
return 0;
}

