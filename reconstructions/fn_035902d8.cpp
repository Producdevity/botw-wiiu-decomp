#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104876d4;
extern "C" RuntimeTag data_104876d0;
extern "C" const RuntimeVTable data_102e6530;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102e6530; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104876d0;
    if (data_104876d4 == 0) {
        data_104876d4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_035902d8(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
