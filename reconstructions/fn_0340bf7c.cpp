#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048620c;
extern "C" RuntimeTag data_10490d28;
extern "C" const RuntimeVTable data_102bfd88;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102bfd88; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10490d28;
    if (data_1048620c == 0) {
        data_1048620c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_0340bf7c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
