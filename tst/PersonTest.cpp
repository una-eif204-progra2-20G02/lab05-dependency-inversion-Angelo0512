//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){

    Person person;
    Sender* Bt = new BankTransferSender();
    Sender* Cha = new CashSender();
    Sender* Che = new CheckSender();

    EXPECT_EQ(person.processPayment(Bt), "Sending the money by transference");
    EXPECT_EQ(person.processPayment(Cha), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(Che), "Sending the check with the money");

    delete Bt;
    delete Cha;
    delete Che;
}
