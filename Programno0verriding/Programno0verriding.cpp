#include <iostrem>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya Function dari base class";
	}
};
class derivedClass : public baseClass{

};