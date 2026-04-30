#include"modul1.h"

using namespace std;

int main()
{
	vector<int> v;
	int n;
	cout << "Enter n :";
	cin >> n;
	cout << "Enter elements ";

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int min, max;
	try {
		findMinMax(v, min, max);
		cout << "Min: " << min << endl;
		cout<<" Max: " << max << endl;
	} catch (const invalid_argument& e) {
		cerr << e.what() << endl;
	}
	return 0;	


	
}

