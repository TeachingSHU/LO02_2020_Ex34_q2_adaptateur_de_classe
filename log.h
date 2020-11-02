//
// Created by lunde on 2020/11/1.
//

#ifndef LO02_2020_EX34_LOG_H
#define LO02_2020_EX34_LOG_H

#include "timing.h"
#include<iostream>
class Log {
public:
    virtual void addEvt(const TIME::Date& d, const TIME::Horaire& h, const std::string
    & s)=0;
    virtual void displayLog(std::ostream& f) const=0;
};

#endif //LO02_2020_EX34_LOG_H
