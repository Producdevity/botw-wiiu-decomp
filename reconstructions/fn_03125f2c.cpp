#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485ce8;
extern "C" RuntimeTag data_10485cec;
extern "C" const RuntimeVTable data_10283f80;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10283f80; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10485cec;
    if (data_10485ce8 == 0) {
        data_10485ce8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03125f2c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
