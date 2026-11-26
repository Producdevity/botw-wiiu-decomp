#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048f5cc;
extern "C" RuntimeTag data_104924f4;
extern "C" const RuntimeVTable data_1027b8d4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1027b8d4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104924f4;
    if (data_1048f5cc == 0) {
        data_1048f5cc = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_030c6544(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
