#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486c30;
extern "C" RuntimeTag data_10486c2c;
extern "C" const RuntimeVTable data_10009b98;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10009b98; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486c2c;
    if (data_10486c30 == 0) {
        data_10486c30 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02057a94(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
