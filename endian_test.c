#include<stdio.h>
union test{
	unsigned int u_number;
	char c[4];
};
int main(){
	union test t;
	t.u_number = 0x04030201;
	printf("hex number:%x,address:%p\n",t.u_number,&t.u_number);
	printf("number:%d,address:%p\n",t.c[0],&t.c[0]);
	printf("number:%d,address:%p\n",t.c[1],&t.c[1]);
	printf("number:%d,address:%p\n",t.c[2],&t.c[2]);
	printf("number:%d,address:%p\n",t.c[3],&t.c[3]);
	
	return 0;
}
