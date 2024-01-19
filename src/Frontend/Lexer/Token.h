//
// Created by lyh on 2023/11/8.
//

#ifndef SYSY_COMPILER_TOKEN_H
#define SYSY_COMPILER_TOKEN_H

#include "LexType.h"
#include <string>


class Token {
public:
    Token(LexType lexType, std::string word, int lineNum);

    Token();

    LexType lexType = LexType::NONE;
    std::string word;
    int lineNum = 1;

    void setToken(const Token &token);
};


#endif //SYSY_COMPILER_TOKEN_H