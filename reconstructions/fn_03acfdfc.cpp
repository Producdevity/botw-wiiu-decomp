#include "botw/parameter.h"

extern "C" void fn_03acfdfc(ParameterNode* node, const SafeString* name, const SafeString* label,
                            const SafeString* meta, ParameterNodeList* list) {
    node->next = 0;
    node->hash = fn_03acfdbc(name);
    if (list)
        fn_03ad4f2c(list, node);
}
