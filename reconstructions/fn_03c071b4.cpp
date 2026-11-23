#include "botw/string_index_table.h"

extern "C" StringIndexNode* fn_03c06ef4(StringIndexTable* table, const char* name, int length);

namespace {

inline int stringLength(const char* string) {
    const char* end = string;
    while (*end++) {
    }
    end--;
    return end - string;
}

}

extern "C" int fn_03c071b4(StringIndexTable* table, const char* name) {
    if (!table)
        return -1;
    StringIndexNode* node = fn_03c06ef4(table, name, stringLength(name));
    if (node) {
        StringIndexNode* first = table->nodes;
        return node - first;
    }
    return -1;
}
