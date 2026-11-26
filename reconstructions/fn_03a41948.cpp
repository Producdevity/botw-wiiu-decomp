#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104866f8;
extern "C" RuntimeTag data_10486f78;
extern "C" const RuntimeVTable data_1035d968;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1035d968; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10486f78;
    if (data_104866f8 == 0) {
        data_104866f8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03a41948(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
