#include <stdio.h>

int ft_printf(const char*,...);

int	main(void)
{
	//char str[] = "morning %s afternoon %s\n";
	int i;
	int j;

	i = ft_printf("%p\n",(void *)-1);
	j = printf("%p\n",(void *)-1);
	printf("my printf count %d\n",i);
	printf("original count %d\n",j);
}
