#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485d68;
extern "C" RuntimeTag data_10492004;
extern "C" const RuntimeVTable data_1027b498;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027b498; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10492004;
    if (data_10485d68 == 0) {
        data_10485d68 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030c2d94(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
