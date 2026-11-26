#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048657c;
extern "C" RuntimeTag data_104896f0;
extern "C" const RuntimeVTable data_102cc314;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_102cc314; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104896f0;
    if (data_1048657c == 0) {
        data_1048657c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_034c544c(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
