#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486c9c;
extern "C" RuntimeTag data_104941f0;
extern "C" const RuntimeVTable data_102d5394;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102d5394; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104941f0;
    if (data_10486c9c == 0) {
        data_10486c9c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_035187fc(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
