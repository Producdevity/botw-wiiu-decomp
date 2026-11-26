#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485d44;
extern "C" RuntimeTag data_10490d30;
extern "C" const RuntimeVTable data_1027b238;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027b238; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490d30;
    if (data_10485d44 == 0) {
        data_10485d44 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030bf84c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
