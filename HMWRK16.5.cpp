#include<iostream>
#include<string>


int main()
{


	const int n = 2;
	int array[n][n];//(1 задание)
	int date;
	int sum = 0;
	std::cin >> date;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			array[i][j] = i + j;
			std::cout << array[i][j];


		}
		std::cout << '\n';
	}

	if (date % 2 == 0)
	{
		for (int i = 0; i < n; i++);
		{

			for (int j = 0; j < n; j++)
			{
				sum += array[0][j];

			}
			std::cout << "Sum of first row is :" << sum << std::endl;

			sum = 0;

		}
		std::cout << std::endl;
	}
	else  
	{

		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < n; j++)
			{
				sum += array[1][j];

			}
			std::cout << "Sum of second row is :" << sum << std::endl;

			sum = 0;

		}
		std::cout << std::endl;



	}
	return 0;

}