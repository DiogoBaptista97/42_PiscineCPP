#include <iostream>
#include <cstring>
\
int main(int argc, char **argv)
{
	
	int i = 0;
	int j = 0;
	int len = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(1);
	}
	//use to upper function to convert to upper
	while (argv[++i])
	{
		len = strlen(argv[i]);
		j = 0;
		while (j < len)
		{
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
	}

	i = 1;
	while (argv[i])
	{
		std::cout << argv[i];
		i++;
	}
	
	//std::cout << std::endl;
	return(0);
}