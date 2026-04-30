#include "json.hpp"
#include <iostream>
#include"modul.h"

using json = nlohmann::json;

int main() {
    


    ifstream file("data.csv");
   
    if (!file) {
        cerr << "Cannot open file" << endl;
        return 1;
	}


	vector<Person> people = readPeopleFromCsv("data.csv");

	json j = peopleToJson(people);
  


    return 0;
}