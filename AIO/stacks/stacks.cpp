#include <fstream>
#include <vector>

using namespace std;
int main() {
	ifstream cin("stacksin.txt");
	ofstream cout("stacksout.txt");
	string n;
	vector<string> s;

	cin >> n;
	while (n != "q") {
		if (n == "p") {
			s.pop_back();

		}
		else {
			s.push_back(n);
		}
		if (s.size()) {
			for (string k : s) {
				cout << k << " ";
			}
			cout << "\n";
		}
		else {
			cout << "stack is empty!\n";
		}
		cin >> n;
	}
}