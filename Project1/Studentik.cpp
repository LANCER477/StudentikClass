#include <iostream>
using namespace std;

class Studentik
{
private:
	int year;
	int month;
	int day;
	int phoneN;
	char* city;
	char* country;
	char* nameU;
	int groupN;
	char* name;
	char* surname;

public:
	void Init()
	{
		cout << "|Enter day of birth|--> ";
		cin >> day;
		cout << "|Enter month of birth|--> ";
		cin >> month;
		cout << "|Enter year of birth|--> ";
		cin >> year;

		cout << "|Enter phone number|--> ";
		cin >> phoneN;

		char* buffer = new char[20];

		cout << "|Enter name|--> ";
		cin >> buffer;
		name = new char[strlen(buffer) + 1];
		strcpy_s(name, strlen(buffer) + 1, buffer);
		delete[] buffer;

		cout << "|Enter surname|--> ";
		cin >> buffer;
		surname = new char[strlen(buffer) + 1];
		strcpy_s(surname, strlen(buffer) + 1, buffer);
		delete[] buffer;

		cout << "|Enter city|--> ";
		cin >> buffer;
		city = new char[strlen(buffer) + 1];
		strcpy_s(city, strlen(buffer) + 1, buffer);
		delete[] buffer;

		cout << "|Enter country|--> ";
		cin >> buffer;
		country = new char[strlen(buffer) + 1];
		strcpy_s(country, strlen(buffer) + 1, buffer);
		delete[] buffer;

		cout << "|Enter phone number|--> ";
		cin >> phoneN;

		cout << "|Enter group number|--> ";
		cin >> groupN;
	}

	void Print()
	{
		cout << day << "." << month << "." << year << endl;
		cout << "Phone number --> " << phoneN << endl;
		cout << "City --> " << city << "|Country --> " << country << endl;
		cout << "Universiry name --> " << nameU << endl;
		cout << "Group number --> " << groupN;
		cout << "Name --> " << name << " " << surname;
	}

	char* getName()
	{
		return name;
	}
	char* getSurname()
	{
		return surname;
	}
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
	int getPhoneN()
	{
		return phoneN;
	}
	char* getCity()
	{
		return city;
	}
	char* getCountry()
	{
		return country;
	}
	char* getUniName()
	{
		return nameU;
	}
	int getGroupNr()
	{
		return groupN;
	}


	void setName(const char* nameStud)
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		name = new char[strlen(nameStud) + 1];
		strcpy_s(name, strlen(nameStud) + 1, nameStud);
	}
	void setSurname(const char* surnameStud)
	{
		if (surname != nullptr)
		{
			delete[] surname;
		}
		surname = new char[strlen(surnameStud) + 1];
		strcpy_s(surname, strlen(surnameStud) + 1, surnameStud);
	}
	void setDay(int day)
	{
		day = day;
	}
	void setMonth(int month)
	{
		month = month;
	}
	void setYear(int year)
	{
		year = year;
	}
	void setPhoneNum(int phoneN)
	{
		phoneN = phoneN;
	}
	void setCity(const char* cityName)
	{
		if (city != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(cityName) + 1];
		strcpy_s(city, strlen(cityName) + 1, cityName);
	}
	void setCountry(const char* countryStud)
	{
		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(countryStud) + 1];
		strcpy_s(country, strlen(countryStud) + 1, countryStud);
	}
	void setUniversity(const char* uniName)
	{
		if (nameU != nullptr)
		{
			delete[] nameU;
		}
		nameU = new char[strlen(uniName) + 1];
		strcpy_s(nameU, strlen(uniName) + 1, uniName);
	}
	void setGroupNum(int groupNum)
	{
		groupN = groupNum;
	}

	Studentik(const char* name1, const char* surname1, int d, int m, int y, int phone, const char* country1, const char* university1, int groupNum)
	{
		name = new char[strlen(name1) + 1];
		strcpy_s(name, strlen(name1) + 1, name1);

		surname = new char[strlen(surname1) + 1];
		strcpy_s(surname, strlen(surname1) + 1, surname1);

		day = d;
		month = m;
		year = y;
		phoneN = phone;

		country = new char[strlen(country1) + 1];
		strcpy_s(country, strlen(country1) + 1, country1);

		nameU = new char[strlen(university1) + 1];
		strcpy_s(nameU, strlen(university1) + 1, university1);

		groupN = groupNum;
	}
	~Studentik()
	{
		delete[] name;
		delete[] surname;
		delete[] country;
		delete[] nameU;
	}
};

int year;
int month;
int day;
int phoneN;
char* city;
char* country;
char* nameU;
int groupN;
char* name;
char* surname;

int main()
{

}