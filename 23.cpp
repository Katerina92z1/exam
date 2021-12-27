
#include <iostream>
#include <string>

using namespace std;

class Worker
{
private:
	string surname;
	int experience;
	int time;
	int hours;

	string getSurname(string surname)
	{
		if (surname == " ")
		{
			cout << " Surname: ";
			cin >> surname;
		}
		return surname;
	}
	int getExperience(int experience)
	{
		if (experience == 0)
		{
			cout << "Experience: ";
			cin >> experience;
		}
		return experience;
	}
	int getHours(int hours)
	{
		if (hours == 0)
		{
			cout << "House: ";
			cin >> hours;
		}
		return hours;
	}
	int getTime(int time)
	{
		if (time == 0)
		{
			cout << "Time: ";
			cin >> time;
		}
		return time;
	}
public:
	Worker(string surname, int time, int hours, int experience)
	{
		this->surname = getSurname(surname);
		this->experience = getExperience(experience);
		this->hours = getHours(hours); //кол отработанных часов
		this->time = getTime(time); //плата за час
	}
	void information() //информация, которая выводится 
	{
		cout << "Surname: " << surname << endl;
		cout << "Experience: " << experience << endl;
		cout << "Hours: " << hours << endl;
		cout << "Time: " << time << endl;
		cout << endl;
	}
};
int main()
{
	Worker I(" ", 0, 0, 0);
	cout << "Information";
	I.information();

	return 0;
}

