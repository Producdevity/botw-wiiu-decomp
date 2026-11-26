#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10490ba8;
extern "C" RuntimeTag data_10493bd0;
extern "C" const RuntimeVTable data_10372cf4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10372cf4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10493bd0;
    if (data_10490ba8 == 0) {
        data_10490ba8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03b30f2c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
