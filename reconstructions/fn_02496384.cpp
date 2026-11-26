#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104879b8;
extern "C" RuntimeTag data_1048aa60;
extern "C" const RuntimeVTable data_100c3640;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_100c3640; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_1048aa60;
    if (data_104879b8 == 0) {
        data_104879b8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02496384(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
