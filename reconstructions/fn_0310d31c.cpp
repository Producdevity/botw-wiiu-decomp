#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048623c;
extern "C" RuntimeTag data_104864a8;
extern "C" const RuntimeVTable data_1027fd18;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027fd18; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104864a8;
    if (data_1048623c == 0) {
        data_1048623c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0310d31c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
