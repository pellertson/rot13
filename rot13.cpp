#include <iostream>

using namespace std;

char rot13(char in, char base)
{
	int diff = in - base;
	return diff < 13 ? in + 13 : in - 13;
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