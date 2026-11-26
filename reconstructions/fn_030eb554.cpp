#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1027d728;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027d728; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486d38;
    if (data_10485ed0 == 0) {
        data_10485ed0 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030eb554(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
