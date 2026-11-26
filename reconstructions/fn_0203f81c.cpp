#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486b64;
extern "C" RuntimeTag data_10486ba0;
extern "C" const RuntimeVTable data_10007d6c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10007d6c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486ba0;
    if (data_10486b64 == 0) {
        data_10486b64 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0203f81c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
