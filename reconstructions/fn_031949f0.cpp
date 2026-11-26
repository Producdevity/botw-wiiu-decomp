#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_1028c2d0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1028c2d0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104927e4;
    if (data_10486548 == 0) {
        data_10486548 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_031949f0(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
