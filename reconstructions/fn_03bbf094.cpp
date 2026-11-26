#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048a8a4;
extern "C" RuntimeTag data_10494e50;
extern "C" const RuntimeVTable data_103cd2c4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_103cd2c4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10494e50;
    if (data_1048a8a4 == 0) {
        data_1048a8a4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03bbf094(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
