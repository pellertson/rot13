#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char rot13(char in, char base)
{
	int diff = in - base;
	char result;

	if (diff < 13)
		result = in + 13;
	else
		result = in - 13;

	return result;
}

int main()
{
	char ch;
	while (cin.get(ch)) {
		if (isupper(ch)) {
			ch = rot13(ch, 'A');
		} else if (islower(ch)) {
			ch = rot13(ch, 'a');
		}
		cout.put(ch);
	}

	return 0;
}