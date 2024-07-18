// Program High Scores
// Dsecribes work with algorithm

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main()
{
	std::vector<int>::const_iterator Iter;
	std::cout << "Creating a list of scores";

	std::vector<int> Scores;

	Scores.push_back(1500);
	Scores.push_back(3500);
	Scores.push_back(7500);

	std::cout << "\nHigh Scores: \n";
	for (Iter = Scores.begin(); Iter != Scores.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}

	std::cout << "\nFinding a score.";
	int Score;
	std::cout << "\nEnter a score to find: ";
	std::cin >> Score;

	Iter = find(Scores.begin(), Scores.end(), Score);

	if (Iter != Scores.end())
	{
		std::cout << "Score found\n";
	}
	else
	{
		std::cout << "Score not found\n";
	}

	std::cout << "\nRandomizing scores";

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(Scores.begin(), Scores.end());

	std::cout << "\nHigh Scores: \n";
	for (Iter = Scores.begin(); Iter != Scores.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}

	std::cout << "\nSorting Scores";
	std::sort(Scores.begin(), Scores.end());
	std::cout << "\nHigh Scores: \n";
	for (Iter = Scores.begin(); Iter != Scores.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}
	return 0;
}