#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486394;
extern "C" RuntimeTag data_10490d40;
extern "C" const RuntimeVTable data_102601d4;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102601d4; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490d40;
    if (data_10486394 == 0) {
        data_10486394 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0309f0ac(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
