#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    map<string, int> wordCount;

    // Split the text into words
    string word;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            // If the word is not empty, add it to the map
            if (!word.empty())
                wordCount[word]++;
            word.clear();
        }
        else
        {
            word += text[i];
        }
    }

    // Add the last word to the map
    if (!word.empty())
        wordCount[word]++;

    // Find the maximum occurring word
    string maxWord;
    int maxCount = 0;
    for (auto it = wordCount.begin(); it != wordCount.end(); it++)
    {
        if (it->second > maxCount || (it->second == maxCount && it->first < maxWord))
        {
            maxWord = it->first;
            maxCount = it->second;
        }
    }

    cout << "The maximum occurring word is \"" << maxWord << "\" with a count of " << maxCount << endl;

    return 0;
}
