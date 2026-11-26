#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104915c4;
extern "C" RuntimeTag data_104915c0;
extern "C" const RuntimeVTable data_10213ee0;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10213ee0; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104915c0;
    if (data_104915c4 == 0) {
        data_104915c4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02e389e4(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
