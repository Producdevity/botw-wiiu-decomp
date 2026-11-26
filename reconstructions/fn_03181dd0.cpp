#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486848;
extern "C" RuntimeTag data_104927c8;
extern "C" const RuntimeVTable data_1028b620;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1028b620; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104927c8;
    if (data_10486848 == 0) {
        data_10486848 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03181dd0(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
