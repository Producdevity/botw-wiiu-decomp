#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10493a80;
extern "C" RuntimeTag data_10493a7c;
extern "C" const RuntimeVTable data_10331a54;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10331a54; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10493a7c;
    if (data_10493a80 == 0) {
        data_10493a80 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_038bdeb0(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
