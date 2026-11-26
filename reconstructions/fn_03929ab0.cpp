#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_10339a80;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10339a80; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104957dc;
    if (data_10490490 == 0) {
        data_10490490 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03929ab0(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
