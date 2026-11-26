#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485eb4;
extern "C" RuntimeTag data_10496460;
extern "C" const RuntimeVTable data_1031ef38;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1031ef38; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10496460;
    if (data_10485eb4 == 0) {
        data_10485eb4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_037e7adc(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
