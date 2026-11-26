#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_103196e8;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_103196e8; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10485cd4;
    if (data_10485cd0 == 0) {
        data_10485cd0 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0378c1dc(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
