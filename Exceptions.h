//
// Created by Naren Kolli on 2020-05-26.
//

#ifndef FLIP_EXCEPTIONS_H
#define FLIP_EXCEPTIONS_H

#include <strstream>
#include <string>

using namespace std;

class standardException { //function for any unknown/invalid input

protected:
    string exceptionOutput;

public:
    standardException(const string& val = ""):
            exceptionOutput(val) {
        if (exceptionOutput == "")
            exceptionOutput = "This is an exception";
    }

    string what() const {
        return exceptionOutput;
    }

};

class outOfRAngeError: public standardException //function for out of range - a specific instance of baseException
{
public:
    outOfRAngeError(const string& rangeOutput = ""):
            standardException(rangeOutput)
    {

    }
};

#endif //FLIP_EXCEPTIONS_H
