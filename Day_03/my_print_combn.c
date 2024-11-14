/*
** EPITECH PROJECT, 2023
** my_print_combn.c
** File description:
** printcombn
*/

void print_array(char v[], int size, int last)
{
	int	i = 0;

	if (v[0] == last) {
		while (i < size)
			my_putchar(v[i++]);
		return;
	}
	while (i < size)
		my_putchar(v[i++]);
	write(1, ", ", 2);
}

int my_print_combn(int n)
{
	char array[10];
	char array_max[10];
	int flag;
	int	base;

	if (n <= 0 || n > 10)
		return write(2, "Insert an 0 < n < 10\n", 17);
	for (int i = 0; i < n; ++i) {
		array[i] = i + 48;
		array_max[i] = (10 - n) + i + 48;
	}
	print_array(array, n, array_max[0]);
	while (array[0] != array_max[0]) {
		flag = n - 1;
		while (array[flag] == array_max[flag])
			--flag;
		base = ++(array[flag]);
		while (flag < n-1)
			array[++flag] = ++base;
		print_array(array, n, array_max[0]);
	}
}
