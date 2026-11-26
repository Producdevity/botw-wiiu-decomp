#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_1027a53c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027a53c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10491324;
    if (data_10485ef4 == 0) {
        data_10485ef4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030b76c8(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
