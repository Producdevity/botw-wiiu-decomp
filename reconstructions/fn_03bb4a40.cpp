#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104940b4;
extern "C" RuntimeTag data_104953e8;
extern "C" const RuntimeVTable data_103c8e94;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_103c8e94; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104953e8;
    if (data_104940b4 == 0) {
        data_104940b4 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_03bb4a40(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
