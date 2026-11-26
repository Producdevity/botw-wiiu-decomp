#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485d54;
extern "C" RuntimeTag data_1049238c;
extern "C" const RuntimeVTable data_10260c1c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10260c1c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_1049238c;
    if (data_10485d54 == 0) {
        data_10485d54 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030a5078(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
