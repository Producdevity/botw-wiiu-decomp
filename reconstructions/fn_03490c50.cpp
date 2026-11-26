#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102c9aec;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102c9aec; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486bf8;
    if (data_10485e94 == 0) {
        data_10485e94 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03490c50(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
