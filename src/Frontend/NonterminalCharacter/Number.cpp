//
// Created by lyh on 11/6/2023.
//

#include "Number.h"

Number::Number(NodeType nodeType, int lineNum) : Node(nodeType, lineNum) {}

int Number::getVal() {
    return this->val;
}