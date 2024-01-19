//
// Created by lyh on 11/17/2023.
//

#include "Function.h"
#include "BasicBlock.h"
#include "Param.h"
#include <iostream>
#include <fstream>

extern std::ofstream c_ofs;

Function::Function(const std::string &name, ValueType valueType, Module *module, int cnt) : User(name, valueType),
                                                                                            module(module), cnt(cnt) {}

void Function::translate() {
    if (this->name != "getint" && this->name != "putint" && this->name != "putch" && this->name != "putstr") {
        std::string ret;
        if (this->ret == 0) {
            ret = "void";
        } else {
            ret = "i32";
        }
        c_ofs << "define dso_local " + ret + " @" << this->name << "(";
        if (!this->params.empty()) {
            std::string code;
            for (auto *child:this->params) {
                code += child->getType() + " " + child->getName() + ", ";
            }
            code = code.substr(0, code.size() - 2);
            c_ofs << code;
        }
        c_ofs << ")";
        if (!this->basicBlocks.empty()) {
            c_ofs << " {" << std::endl;
            for (int i = 0; i < basicBlocks.size(); ++i) {
                // 无需输出第一个基本快号，所以i==0时无需输出
                if (i > 0) {
                    // substr为了去掉基本块号首位的%
                    c_ofs << basicBlocks[i]->getName().substr(1, basicBlocks[i]->getName().length()) << ":"
                          << std::endl;
                }
                basicBlocks[i]->translate();
                if (basicBlocks.size() > 1 && i != basicBlocks.size() - 1) {
                    // 最后一个基本块后面不需要加回车
                    c_ofs << std::endl;
                }
            }
            c_ofs << "}" << std::endl;
        } else {
            // 实际上不会出现这个状况，因为至少有一个基本快
            c_ofs << std::endl;
        }
    }
}

void Function::addBasicBlock(BasicBlock *basicBlock) {
    this->basicBlocks.push_back(basicBlock);
}

int Function::allocReg() {
    int t = r;
    r++;
    return t;
}

std::string Function::getName() {
    return "@" + this->name;
}

int Function::paramPos() {
    int t = opNum;
    opNum++;
    return t;
}

void Function::addParam(Param *param) {
    this->params.push_back(param);
}