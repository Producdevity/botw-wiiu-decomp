#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485e98;
extern "C" RuntimeTag data_1048652c;
extern "C" const RuntimeVTable data_102b04f0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102b04f0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_1048652c;
    if (data_10485e98 == 0) {
        data_10485e98 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03324308(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
