#pragma once
#include <iostream>
#include "json.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

using json = nlohmann::json;	
using namespace std;

struct Person {
    int id;
    string name;
    string email;
};

class CsvException : public runtime_error {
public:
    explicit CsvException(const string& message) : runtime_error(message) {}
};

class CsvFileOpenException : public CsvException {
public:
    explicit CsvFileOpenException(const string& message) : CsvException(message) {}
};

class CsvFormatException : public CsvException {
public:
    explicit CsvFormatException(const string& message) : CsvException(message) {}
};

vector<Person> readPeopleFromCsv(const string& filePath);
json peopleToJson(const vector<Person>& people);




