#pragma once
#include <iostream>
#include <vector>

using namespace std;




void findMinMax(const vector<int>& v, int& min, int& max) {
	if (v.empty()) {
		throw invalid_argument("Vector is empty");
	}
	
	min = v[0];
	max = v[0];
	
	for (size_t i = 1; i < v.size(); ++i) {
		if (v[i] < min) {
			min = v[i];
		}
		if (v[i] > max) {
			max = v[i];
		}
	}
}
