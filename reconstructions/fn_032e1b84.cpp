#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104862fc;
extern "C" RuntimeTag data_104868c8;
extern "C" const RuntimeVTable data_102ab3f0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102ab3f0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104868c8;
    if (data_104862fc == 0) {
        data_104862fc = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_032e1b84(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
