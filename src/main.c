#include "libftprintf.h"

int	main(void)
{
	int size;
	size = ft_printf("%010x", 542);
	ft_putnbr(size);
	ft_printf("\nReturn size: \n");


	size = ft_printf("%#x", 42);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("%#llx", 9223372036854775807);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("%#X", 42);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("%#08x", 42);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("%#-08x", 42);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %#.x %#.0x", 0, 0);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %.x %.0x", 0, 0);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %5.x %5.0x", 0, 0);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %s", NULL);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %.o %.0o", 0, 0);
	ft_printf("\nReturn size: %d\n", size);

	size = ft_printf("@moulitest: %5.o %5.0o", 0, 0);
	ft_printf("\nReturn size: %d\n", size);

	// size = ft_printf("hhhß%0+5d", 42);
	// ft_printf("\nReturn size:\n");

	// size = ft_printf("%05d", -42);
	// ft_printf("\nReturn size: \n");

	// size = ft_printf("%0+5d", -42);
	// ft_printf("\nReturn size: %d\n", size);
	// size = ft_printf("%5%");
	// ft_printf("\nReturn size: %d\n", size);
	// size = ft_printf("%-5%");
	// ft_printf("\nReturn size: \n");

	// size = ft_printf("%#08x", 42);
	// ft_printf("\nReturn size: \n");

	// size = ft_printf("%#-08x", 42);
	// ft_printf("\nReturn size: \n");
	return (0);
}
