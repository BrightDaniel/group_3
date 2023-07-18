#include<stdio.h>
int main(){
		char *str = "bright";
			char *str1 = "bright";
		scanf("%p", (void *)&str);
				if(*str == *str1)
							printf("inside if block %p", (void *)&str);
					else 
								printf("inside else block");
						return 0;
}
