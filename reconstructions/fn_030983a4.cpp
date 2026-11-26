#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485f10;
extern "C" RuntimeTag data_10491608;
extern "C" const RuntimeVTable data_1025f824;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1025f824; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10491608;
    if (data_10485f10 == 0) {
        data_10485f10 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030983a4(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
