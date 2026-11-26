#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10493c34;
extern "C" RuntimeTag data_10493c8c;
extern "C" const RuntimeVTable data_102caf9c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102caf9c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10493c8c;
    if (data_10493c34 == 0) {
        data_10493c34 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0349ec90(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
