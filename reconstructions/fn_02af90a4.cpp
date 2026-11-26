#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104862b8;
extern "C" RuntimeTag data_10486534;
extern "C" const RuntimeVTable data_101a9700;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_101a9700; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486534;
    if (data_104862b8 == 0) {
        data_104862b8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02af90a4(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
