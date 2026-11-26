#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_1036d998;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1036d998; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490b60;
    if (data_10489478 == 0) {
        data_10489478 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03ae7834(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
