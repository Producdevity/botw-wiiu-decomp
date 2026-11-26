#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10486ac0;
extern "C" RuntimeTag data_104914b8;
extern "C" const RuntimeVTable data_10291a2c;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10291a2c; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104914b8;
    if (data_10486ac0 == 0) {
        data_10486ac0 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_031d7054(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
