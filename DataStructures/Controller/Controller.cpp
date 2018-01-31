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
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    FileController crimeTest;
    crimeTest.readCrimeDataToVector("/Users/mjoh7008/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
}
