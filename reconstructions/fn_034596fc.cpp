#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048686c;
extern "C" RuntimeTag data_10486f40;
extern "C" const RuntimeVTable data_102c83fc;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102c83fc; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486f40;
    if (data_1048686c == 0) {
        data_1048686c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_034596fc(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
