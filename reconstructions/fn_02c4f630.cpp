#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486274;
extern "C" RuntimeTag data_10490d7c;
extern "C" const RuntimeVTable data_101c5fb4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_101c5fb4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490d7c;
    if (data_10486274 == 0) {
        data_10486274 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02c4f630(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
