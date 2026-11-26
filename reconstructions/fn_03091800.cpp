#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048622c;
extern "C" RuntimeTag data_10490e38;
extern "C" const RuntimeVTable data_1025e79c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1025e79c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490e38;
    if (data_1048622c == 0) {
        data_1048622c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03091800(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
