#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_10334c40;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10334c40; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104912b0;
    if (data_10486c7c == 0) {
        data_10486c7c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_038eb94c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
