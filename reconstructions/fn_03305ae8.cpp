#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104867ac;
extern "C" RuntimeTag data_104868d8;
extern "C" const RuntimeVTable data_102ad6c8;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102ad6c8; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104868d8;
    if (data_104867ac == 0) {
        data_104867ac = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03305ae8(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
