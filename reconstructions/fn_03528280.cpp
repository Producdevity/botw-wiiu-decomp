#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048b75c;
extern "C" RuntimeTag data_104912b8;
extern "C" const RuntimeVTable data_102d77b0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102d77b0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104912b8;
    if (data_1048b75c == 0) {
        data_1048b75c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03528280(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
