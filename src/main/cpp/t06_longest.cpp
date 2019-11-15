//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>
#include <string>


using namespace std;

int t06_longest() {
    string phrase, word;
    getline(cin, phrase);
    phrase += ' ';
    int n = 0;
    int s1 = phrase.size(), s2 = 0;
    for (int i = 0; i < s1; i++) {
        if (phrase[i] != ' ') {
            n++;
        }
        else{
            string frag = phrase.substr(i-n, n);
            if(frag.size() > s2){
                word = frag;
                s2 = frag.size();
            }
            n = 0;
        }
    }
    cout << word;
    return 0;
}
