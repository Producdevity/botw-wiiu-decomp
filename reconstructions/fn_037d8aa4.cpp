#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048627c;
extern "C" RuntimeTag data_10492660;
extern "C" const RuntimeVTable data_1031da64;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1031da64; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10492660;
    if (data_1048627c == 0) {
        data_1048627c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_037d8aa4(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
