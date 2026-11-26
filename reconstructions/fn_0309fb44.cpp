#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486384;
extern "C" RuntimeTag data_10492344;
extern "C" const RuntimeVTable data_10260494;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10260494; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10492344;
    if (data_10486384 == 0) {
        data_10486384 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0309fb44(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
