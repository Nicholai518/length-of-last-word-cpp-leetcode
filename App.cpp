#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        // A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
        stringstream string_stream(s);

        // holds current word of "stream"
        string word;

        // while there is a word
        // keeps running until we reach the last word
        while (string_stream >> word) {

        }

        // return last words length
        return word.length();
    }
};


int main()
{
    Solution solution;

    string example_one = "Hello World";
    string example_two = "   fly me   to   the moon  ";
    string example_three = "pizza is the best";

    cout << "Example One : " << solution.lengthOfLastWord(example_one) << endl;
    cout << "Example Two : " << solution.lengthOfLastWord(example_two) << endl;
    cout << "Example Three : " << solution.lengthOfLastWord(example_three) << endl;

	return 0;
}
