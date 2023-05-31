#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
	void SetSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string GetSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
