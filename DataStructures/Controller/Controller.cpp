//
//  Controller.cpp
//  DataStructures
//
//  Created by Johnsen, Matthew on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
//    ArrayTester myTest;
//    myTest.testArrayUse();
//    myTest.testAdvancedArray();
    
//    LinkedListTester myTest2;
//    myTest2.testListBasics();
//    myTest2.testListStrings();
//    myTest2.testListWithData();
    
//    TestingStacksAndQueues myTest3;
//    myTest3.stackVersusList();
//    myTest3.stackVersusQueue();
//    myTest3.queueVersusList();
    
    RecursionTester myTest4;
    myTest4.testRecursionNumbers();
    
//    cout << "Testing the Timer class" << endl;
//    Timer codeTimer;
//    codeTimer.startTimer();
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/mjoh7008/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
//    for (int index = 199; index < 215; index++)
//    {
//        cout << "Data at spot # " << index + 1 << ": " << myData[index] << endl;
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/mjoh7008/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index ++)
    {
        if (myData[minIndex] > myData[index])
        {
            minIndex = index;
        }
        
        else if (myData[maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
