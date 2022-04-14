#include<windows.h>
#include"main.h"
#include"function.h"
#include"string.h"

enum NORMAL_MODE_STATUS normal_mode_status = sleep;
int main(void)
{
	char str[20] = {"hello "};
	char str2[20] = {"word!"};
	char str3[20] = {0};
	int a = 2, b = 3, c = 0;
	//strcat_s(str,sizeof(str),str2);
	strcat(str,str2);
	printf("str = %s\r\n",str);
	printf("sizeof(str3) = %d\r\n", sizeof(str3));
	printf("normal_mode_status = %d\r\n", normal_mode_status);
	printf("c = %d\r\n",c);
	add(&a, &b);
	change_status();
#ifdef PRINT_FLAG
	printf("#ifdefine 定义成功");
#endif // PRINT_FLAG

	return 0;
}