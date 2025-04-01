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
/* 主程式 */
int main(){
	printf("\n本程式由 劉禹寬 設計\n\n");
	printf("BASIC 語言提供 MID$()、RIGHT$() 和 LEFT$() 等字串處理函數，請分別使用 C 語言的陣列與指標寫出這 3 個函數，");
	printf("例如:char string[20] = {This is a book.};\n\n");
	printf("上述函數的執行結果，如下所示：\n");
	printf("a.MID$(string,6,2) 是'is'，索引是從1開始，就是從位置 6 取出 2 個字元。\n");
	printf("b.RIGHT$(string,5) 是'book.'，取出最右邊的 5 個字元。\n");
	printf("c.LEFT$(string,4) 是'This'，取出最左邊的 4 個字元。\n");
	printf("程式設計結果如下：\n\n");

char str[100]="This is a book.";
printf("8-1 strMid(str, int, int)：\n");
  printf("擷取前：Str=%s\n",str);
  printf("擷取後 strmid( str , 6 , 2 )：%s\n\n",strmid(str , 6 , 2 ));

printf("8-2 strRight()：\n");
  printf("擷取前：Str=%s\n",str);
  printf("擷取後 strRight( str , 5 )：%s\n\n",strright(str , 5 ));
  
printf("8-3 strLeft()：\n");
  printf("擷取前：Str=%s\n",str);
  printf("擷取後 strLeft( str , 4 )：%s\n\n",strleft(str , 4 ));

system("PAUSE");/* 暫停 */
return 0;
}

