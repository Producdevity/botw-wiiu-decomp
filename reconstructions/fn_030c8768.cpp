#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048f64c;
extern "C" RuntimeTag data_10492500;
extern "C" const RuntimeVTable data_1027bba4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027bba4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10492500;
    if (data_1048f64c == 0) {
        data_1048f64c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030c8768(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
