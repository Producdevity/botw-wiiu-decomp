#include "botw/runtime_tag_query.h"

extern "C" unsigned data_1048713c;
extern "C" RuntimeTag data_10489440;
extern "C" const RuntimeVTable data_1006c77c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1006c77c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10489440;
    if (data_1048713c == 0) {
        data_1048713c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02285474(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
