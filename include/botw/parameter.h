#ifndef BOTW_PARAMETER_H
#define BOTW_PARAMETER_H

#include "botw/safe_string.h"

// Parameter list node: name hash, next node, then the GHS vtable pointer.
struct ParameterNode {
    unsigned hash;
    ParameterNode* next;
};

// Owning list of parameter nodes: first, last, count.
struct ParameterNodeList {
    ParameterNode* first;
    ParameterNode* last;
    int count;
};
typedef char ParameterNodeListSize[sizeof(ParameterNodeList) == 12 ? 1 : -1];

extern "C" unsigned fn_03acfdbc(const SafeString* name);
extern "C" void fn_03ad4f2c(ParameterNodeList* list, ParameterNode* node);
extern "C" void fn_03acfdfc(ParameterNode* node, const SafeString* name, const SafeString* label,
                            const SafeString* meta, ParameterNodeList* list);

#endif
