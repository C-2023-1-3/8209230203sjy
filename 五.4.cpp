#include<iostream>
using namespace std;
class student
{
public:
	int number;
	int score;
	friend void maxcompute(student* max, student* min, student x[]);
};
void maxcompute(student* max, student* min, student x[])
{
	for (int i = 0; i <= 4; i++)
	{
		max = &x[i];
		min = &x[i + 1];
		if (max->score < min->score)
		{
			student* temp;
			temp = max;
			max = min;
			min = temp;
		}

	}
	cout << "The student with the highest grades is:" << max->number;

}
int main()
{
	student stud[5] = { {1,90},{2,60},{3,70},{4,80},{5,100} };
	student* max = &stud[0];
	student* min = &stud[1];
	maxcompute(max, min, stud);

}
