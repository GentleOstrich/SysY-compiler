//
// Created by lyh on 11/9/2023.
//

#include "SymbolTable.h"

//#define ERROR_CHECK

#ifdef ERROR_CHECK

struct Error {
    int line;
    char c;
};
extern Error errors[1000];
extern int e;

#define printError(lineNum, type) errors[e++] = {lineNum, type[0]}

#endif

void SymbolTable::createSymbolTable() {
    table.push(this->symbolId);
}

void SymbolTable::addSymbol(Symbol *symbol, int lineNum) {
    this->symbols.insert(symbols.begin() + symbolId, symbol);
    symbolId++;
//    if (!findSymbol(symbol->word, symbol->type == -1, false)) {
//        symbols.insert(symbols.begin() + symbolId, symbol);
//        symbolId++;
//    } else {
#ifdef ERROR_CHECK
    printError(lineNum, "b");
#endif
    return;
}


void SymbolTable::deleteSymbolTable() {
    symbolId = table.top();
    table.pop();
}

SymbolTable::SymbolTable() {
    symbolId = 0;
}

Symbol *SymbolTable::getSymbol(const std::string &word, bool isFunc, bool all) {
    int end = (all) ? 0 : table.top();
    for (int i = this->symbolId - 1; i >= end; --i) {
        if (symbols[i]->word == word && ((isFunc && symbols[i]->value->valueType == ValueType::Function) ||
                                         (!isFunc && symbols[i]->value->valueType != ValueType::Function))) {
            return symbols[i];
        }
    }
    return nullptr;
}
