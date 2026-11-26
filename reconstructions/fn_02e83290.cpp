#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104916d8;
extern "C" RuntimeTag data_1049177c;
extern "C" const RuntimeVTable data_10217b34;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10217b34; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_1049177c;
    if (data_104916d8 == 0) {
        data_104916d8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02e83290(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
