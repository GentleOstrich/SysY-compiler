//
// Created by lyh on 2023/11/1.
//

#ifndef SYSY_COMPILER_MAINFUNCDEF_H
#define SYSY_COMPILER_MAINFUNCDEF_H
#include "Node.h"

class MainFuncDef : public Node {
public:
    MainFuncDef(NodeType nodeType, int lineNum);
    std::string word;
    std::string getWord() override;
};


#endif //SYSY_COMPILER_MAINFUNCDEF_H
