//
// Created by Tom Guo on 13/10/2017.
//

#ifndef CPP_PRIMER_PLUS_NAMESP_H
#define CPP_PRIMER_PLUS_NAMESP_H

#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person&);
    void showPerson(const Person&);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt&);
    void showDebt(const Debt&);
    double sumDebts(const Debt arr[], int n);
}


#endif //CPP_PRIMER_PLUS_NAMESP_H
