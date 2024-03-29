#include <iostream>
#include <string>
using namespace std;

int countNumberOfWords(string sentence){
    int numberOfWords = 0;
    size_t i;

    if (isalpha(sentence[0])) {
        numberOfWords++;
    }

    for (i = 1; i < sentence.length(); i++)
        {
        if ((isalpha(sentence[i])) && (!isalpha(sentence[i-1]))) {
            numberOfWords++;
        }

    }

    return numberOfWords;
}

int main()

{
    string sentence;
    cout<<" ";
    getline(cin, sentence);

    int numberOfWords = countNumberOfWords(sentence);
    cout<<" "<<numberOfWords<<endl;

    return 0;

}
