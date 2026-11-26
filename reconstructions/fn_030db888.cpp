#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_1027cb8c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027cb8c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490b20;
    if (data_104861f8 == 0) {
        data_104861f8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030db888(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
