//
// Created by lyh on 2023/11/2.
//

#include "Stmt.h"

void Stmt::setLVal1(LVal *lVal1) {
    this->lVal1 = lVal1;
}

void Stmt::setEquExp(EqExp *eqExp) {
    Stmt::eqExp = eqExp;
}

void Stmt::setExp(Exp *exp) {
    this->exp = exp;
}

void Stmt::setBlock(Block *block) {
    this->block = block;
}

void Stmt::setIfCond(Cond *ifCond) {
    Stmt::ifCond = ifCond;
}

void Stmt::setIfStmt(Stmt *ifStmt) {
    Stmt::ifStmt = ifStmt;
}

void Stmt::setElseStmt(Stmt *elseStmt) {
    Stmt::elseStmt = elseStmt;
}

void Stmt::setForStmt1(Stmt *forStmt1) {
    ForStmt1 = forStmt1;
}

void Stmt::setForCond(Cond *forCond) {
    Stmt::forCond = forCond;
}

void Stmt::setForStmt2(Stmt *forStmt2) {
    ForStmt2 = forStmt2;
}

void Stmt::setIsBreak(bool isBreak) {
    Stmt::isBreak = isBreak;
}

void Stmt::setIsContinue(bool isContinue) {
    Stmt::isContinue = isContinue;
}

void Stmt::setReturnExp(Exp *returnExp) {
    Stmt::returnExp = returnExp;
}

void Stmt::setIsReturn(bool isReturn) {
    Stmt::isReturn = isReturn;
}

void Stmt::setLVal2(LVal *lVal2) {
    this->lVal2 = lVal2;
}

void Stmt::setIsGetint(bool isGetint) {
    Stmt::isGetint = isGetint;
}

void Stmt::setFormatString(const std::string &formatString) {
    this->formatString = formatString;
}

void Stmt::addExps(Exp *exp) {
    this->exps.push_back(exp);
}

void Stmt::setIsPrintf(bool isPrintf) {
    Stmt::isPrintf = isPrintf;
}