//
// Created by lyh on 2023/11/2.
//

#ifndef SYSY_COMPILER_FORSTMT_H
#define SYSY_COMPILER_FORSTMT_H
#include "Node.h"
#include <vector>

class ForStmt : public Node {
public:
    ForStmt(NodeType nodeType, int lineNum);

};


#endif //SYSY_COMPILER_FORSTMT_H