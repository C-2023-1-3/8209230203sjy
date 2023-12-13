#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i <size1;i++)
	{
		list3[i] = list1[i];
	}
	for (int m = 0; m<size2;m++)
	{
		list3[m+size1] = list2[m];
	}
}
void bubblesort(int list3[],int size1,int size2)
{
	int size3 = size1 + size2;
	for (int d = 0; d < (size3 - 1); d++)
	{
		for (int a = 0; a < (size3 - 1); a++)
		{

			if (list3[a] > list3[a + 1])
			{
				int temp = 0;
				temp = list3[a];
				list3[a] = list3[a + 1];
				list3[a + 1] = temp;
			}
		}
	}
}
int main()
{
	int size1, size2;
	cout << "Please enter the number of elements in array one,, the number of elements in each array does not exceed 80:";
	cin >> size1;
	 int* list1 = new int[size1];
	cout << "Please enter the corresponding array in the corresponding position" << endl;
	cout << "Enter list1:";
	for (int b=0;b<size1;b++)
	{
		cin >> list1[b];
	}


	cout << "Please enter the number of elements in array two,the number of elements in each array does not exceed 80:";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "Enter list2:";
	for(int c=0;c<size2;c++)
	{
		cin >> list2[c];
	}



	int size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
	bubblesort(list3, size1, size2);
	cout << "The arranged array is:";
	for (int j = 0; j < size3; j++)
	{
		cout << list3[j] << " ";
	}

	delete[]list1;
	delete[]list2;
	delete[]list3;

	
}