#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_1027a53c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027a53c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486a8c;
    if (data_10485ee8 == 0) {
        data_10485ee8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030b7608(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
