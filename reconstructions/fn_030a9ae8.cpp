#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485d40;
extern "C" RuntimeTag data_10492348;
extern "C" const RuntimeVTable data_10260fb0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10260fb0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10492348;
    if (data_10485d40 == 0) {
        data_10485d40 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030a9ae8(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
