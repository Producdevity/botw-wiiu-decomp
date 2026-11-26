#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10485e28;
extern "C" RuntimeTag data_10486b20;
extern "C" const RuntimeVTable data_10353c58;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10353c58; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486b20;
    if (data_10485e28 == 0) {
        data_10485e28 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_039e778c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
