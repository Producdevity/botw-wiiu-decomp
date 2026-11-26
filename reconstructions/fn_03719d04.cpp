#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_1030b470;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1030b470; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10495dac;
    if (data_10486300 == 0) {
        data_10486300 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03719d04(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
