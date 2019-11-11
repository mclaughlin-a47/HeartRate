#pragma once
#include <iostream>
#include <ctime>

class HeartRates {
private:
	std::string firstname_;
	std::string secondname_;
	int day_;
	int month_;
	int year_;
	int age_;

public:
	HeartRates(std::string firstname, std::string secondname, int day, int month, int year, int age)
		:firstname_{ firstname }, secondname_{ secondname }, day_{ day }, month_{ month }, year_{ year }, age_{ age }{
	
		std::cout << "calling custom constructor \n";
		age_ = calculateAge();
}

	void setfirstname(std::string firstname) {
		firstname_ = firstname;
}

	std::string getfirstname() const {
		return firstname_;
}

	void setsecondname(std::string secondname) {
		secondname_ = secondname;
}
	std::string getsecondname()const {
		return secondname_;
	}
	void setday(int day) {
		day_ = day;
		}

	int getday(int day) {
		return day_;
	}

	void setmonth(int month) {
		month_ = month;
	}

	int getmonth(int month) {
		return month_;
	}

	void setyear(int year) {
		year_ = year;
	}
	int getyear(int year) {
		return year_;
	}
	void setage(int age) {
		age_ = age;
	}

	int calculateAge(){
		stuct tm newtime;
		time_t now = time(0);
		localtime_s(&newtime, &now);
		int year = 1900 + newtime.tm.year;
		return age_;
}
	int calculatemaxrate(int varAge){
		return 220 - varAge;
		
	}
	int calculatelowerrate() {
		int maxrate = calculatemaxrate();
		return 50 * maxrate / 100;
	}
	int calculatetoprate() {
	
	}
}
};