#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486730;
extern "C" RuntimeTag data_10490b5c;
extern "C" const RuntimeVTable data_10363bf8;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10363bf8; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490b5c;
    if (data_10486730 == 0) {
        data_10486730 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03a91f88(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
