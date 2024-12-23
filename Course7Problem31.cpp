#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string\n";
	getline(cin, UserString);
	return UserString;
}

char ReadLetter()
{
	char Letter = ' ';
	cout << "Enter a letter to search:\n";
	cin >> Letter;
	return Letter;
}

char InvertLetter(char& Letter)
{

	return islower(Letter) ? toupper(Letter) : tolower(Letter);

}


short LetterCount(string& UserString, char Letter, bool MachCase = true)
{
	short Counter = 0;
	for (short i = 0; i < UserString.length(); i++)
	{
		if (MachCase)
		{
			if (UserString[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(UserString[i]) == tolower(Letter))
				Counter++;
		}


	}
	return Counter;

}

int main()
{
	string UserString = ReadString();
	char Letter = ReadLetter();

	cout << "Letter \'" << Letter << "\' iterations = " << LetterCount(UserString, Letter) << "\n";

	cout << "Letter \'" << Letter << "\' or \'" << InvertLetter(Letter) << "\' iterations = " << LetterCount(UserString, Letter, false);


	return 0;
}
