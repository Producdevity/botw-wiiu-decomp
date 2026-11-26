#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1049189c;
extern "C" RuntimeTag data_10491dc8;
extern "C" const RuntimeVTable data_1021e3d4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1021e3d4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10491dc8;
    if (data_1049189c == 0) {
        data_1049189c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02ee7ed4(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
