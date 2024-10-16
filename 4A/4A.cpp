
#include <iostream>
#include <String>
using namespace std;

int main()
{
	int waterMelon = 0;
	cin >> waterMelon;
	string state;
	state = (waterMelon % 2 == 0) ? "true": "false";
	cout << state;
	return 0;
}
