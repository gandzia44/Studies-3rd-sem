#pragma once
#include <string>
#include <iostream>
#include "stringlink.h"
#include <fstream>
using namespace std;
class wordCloud {

public:
    void insertWord(string aWord);
    void loadWordCloud(string fileName);
    void insertWordDistinct(string word);
    void printWordCloud(int freq);


    int size;

};

void wordCloud::insertWord(string aWord) {
    stringlink* newWord = new stringlink(aWord);

    //old code
    if (head == NULL)
        head = newWord;
    else {
        newWord->next = head;
        head = newWord;
    }

    //revised code
    //newWord->next = head;
    //head = newWord;
    size++;
}
void wordCloud::insertWordDistinct(string word) {
    for (wordNode* temp = head; temp != NULL; temp = temp->next) {
        if (word == temp->myWord) {
            temp->freq_count++;
            //cout << temp->freq_count; //for debugging
        }
    }
    insertWord(word);
}

void wordCloud::printWordCloud(int freq) {
    wordNode* temp, * previous;
    int listSize = 0;

    if (head == NULL)                   //determines if there are any words in the list
        cout << "No Word Cloud" << endl;
    else {
        temp = head;

        while (temp->next != NULL) {         //prints each word until the list is NULL
            if (temp->freq_count >= freq) {
                cout << temp->myWord << " <" << temp->freq_count << ">" << endl;
                temp = temp->next;
                listSize++;
            }
            else {
                previous = temp;
                temp = temp->next;
                previous = NULL;
                free(previous);
            }
        }
    }
    cout << "\nThere are " << size << " words in the file.\n";      //print file size - for debugging - works
    cout << "\nThere are " << listSize << " words in the list\n\n";     //print list size - for debugging - works
    system("pause");
}
/*
void wordCloud::printBlacklist() {
    wordNode* temp;

    if (head == NULL)                   //determines if there is a list
        cout << "No Words in the blacklist" << endl;
    else {
        temp = head;

        while (temp != NULL) {           //prints each word until the list is NULL
            cout << temp->myWord << endl;
            temp = temp->next;
        }
    }
    cout << "\nThere are " << size << " words in the file.\n\n";        //print size - for debugging - works
    system("pause");
}
*/
void wordCloud::loadWordCloud(string fileName) {
    ifstream file;                      //variable for fileName
    string word;                        //string to hold each word

    file.open(fileName);                //open file

    if (!file) {                        //error handling
        cout << "Error: Can't open the file. File may not exist.\n";
        exit(1);
    }

    while (!file.eof()) {
        file >> word;                   //grab a word from the file one at a time

        insertWordDistinct(word);
        //insertWord(word);             //for debugging
        //cout << word <<'\n';          //print word - for debugging
    }

    //printWordCloud();                 //print word cloud - for debugging - works
    file.close();                       //always make sure to close file after read
}
