#include <iostream>
#include <cctype>

int  main(int ac,char **av)
{
	int 	counter;
	int 	i;
	char	c;

	i = 0;
	counter = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (counter < ac)
	{
		i = 0;
		while (av[counter][i])
		{
			c = toupper(av[counter][i]);
			std::cout << c;
			i++;
		}
		counter++;
	}
	std::cout << '\n';
	return (0);
}

