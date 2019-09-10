#include<iostream>
#include<string>
using namespace std;
void ListStudent(string N[100], int S[100], int );
char Calgrade(int);
int main()
{
	int NS;
	string N[100];
	int S[100];
	
	cout << "Input Number of Student : ";
	cin >> NS;
	for (int i = 1; i <= NS; i++)
	{
		cout << "Input Name : " ;
		cin >> N[i];
		cout << "Input Score : ";
		cin >> S[i];
		cout << endl;
	}
	ListStudent(N, S, NS);
	return 0;
}
void ListStudent(string N[100], int S[100],int NS)
{
	for (int i = 1; i <= NS; i++)
	{
		cout << "Student Name : " << N[i] << " " << "Score " << i << " = " << S[i]<<" "<<"Your grade is "<< Calgrade(S[i]) <<endl;
	}
	
}
char Calgrade(int score)
{
	if (score >= 80 && score <= 100)
		return ('A');
	else if (score >=70)
		return ('B');
	else if (score >= 60)
		return ('C');
	else if (score >= 50)
		return ('D');
	else 
		return ('F');
}

/*#include<iostream>
#include<string>
using namespace std;
void SS(int &score);
int main()
{
	int score;
	cout << "Enter score : ";
	cin >> score;
	SS(score);
	cout << "Score = " << score << endl;
	return 0;
}

void SS(int &score)
{
	score = 10;
}*/


