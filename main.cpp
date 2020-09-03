
//main.cpp
//This program is a word DE-scrambler.
//This program will take a scrambled word into an array and de-scrambles it to reveal the word.
//Created by David Serrato on 5/27/20.
//Copyright © 2020 David Serrato. All rights reserved.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    
   /*
    const int SIZE = 10;  //array size
    char word[SIZE];  //word array to hold user's input
    int count = 0;   //Loop counter variable
    
    //Get users input
    cout<<"Please enter the word you want to De-scrambled (all lower case please) : ";
    cin.getline(word, SIZE);
    
    //Display the contents of the array.
    cout<<"You entered : ";
    while(word[count] != '\0'){
        cout<< word[count];
        count++;
    }
    cout<<endl;
    
    // using sort algorithm to sort the letters within the users word.
    sort(word, &word [ '\0']);
    //  do
    //  {
   //    cout <<word[0]<<' ' <<word[1]<<' ' <<word[2]<<word[3]<<word[4]<<' '<<word[5]<<' '<<word[6]<<' '<<word[7]<<' '
   //     <<word[8]<<' ' <<word[9]<<' '<<endl;
   //       {while(next_permutation(word, word+10));
    
    //open english3.txt file for word reference.
    ifstream english3;
    english3.open("/Users/dawveedserrato/Desktop/word_Descrambler/english3.txt");
    if (!english3.is_open()) {
        cout << "unable to load english3.txt" << endl;
        
        //The map library will verify if the user's input is a valid word.
        //First we will load the english3.txt file into the map.
        map<string, int>english3;
        cout<<"loaded"<<endl;
    
    //Closing the english3.txt file.
     //english3.close();
    
   */
    
    
    //This code demonstrates taking a word into a vector.
    
    //int count;   //Loop counter variable
    string letters;  //Gets user's input
    string key;     //word value for the map
    int value;      //integer value for the map
    
    ifstream english3;
    
    //open english3.txt file. This file contains a multitude of words (a dictionary) that will be used to refernce if the user's
    //input is a valid word.
    english3.open("/Users/dawveedserrato/Desktop/word_Descrambler/english3.txt");
    //if (!english3.is_open()){
        //cout << "unable to load wordlist.txt" << endl;
    //}
    
    //read the english.txt file into the map.
    map<string, int>reference;
    while(english3 >> key >> value)
    {
        reference[key] = value; //input to the map
    }
        //Closing the english3.txt file.
        english3.close();
        
    //Get user's scrambled word.
    //First we will put the user's scrambled wor into a vector. So we can manipulate the characters.
    //define a vector object.
    vector<string>vect;
    cout<<"Please enter the letters you want to De-scrambled (all lower case please): ";
    while(cin>>letters){
        vect.push_back(letters);
        cout<<"you have entered: " <<letters<<endl;
    }
    
    //We will now sort the users scrambled word into different combinations.
    sort(vect.begin(), vect.end());
    //display the output
    cout<<"Here is the sorted output: "<<endl;
    for(count =0; count<vect.size(); count++)
        cout<< vect[count]<<" "<<endl;
    
    //define iterator object
   // vector<string>::iterator iter;
    
    
   
        
        
 
    
    return 0;
    }

