#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048a8bc;
extern "C" RuntimeTag data_10497b58;
extern "C" const RuntimeVTable data_103cfc64;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_103cfc64; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10497b58;
    if (data_1048a8bc == 0) {
        data_1048a8bc = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03beaf50(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
