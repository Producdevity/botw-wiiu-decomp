#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104868a4;
extern "C" RuntimeTag data_10486b30;
extern "C" const RuntimeVTable data_102b3010;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102b3010; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486b30;
    if (data_104868a4 == 0) {
        data_104868a4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0333b838(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
