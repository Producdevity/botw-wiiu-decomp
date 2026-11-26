#include "botw/runtime_tag_query.h"

extern "C" unsigned data_104865e8;
extern "C" RuntimeTag data_10491854;
extern "C" const RuntimeVTable data_10218dbc;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_10218dbc; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_10491854;
    if (data_104865e8 == 0) {
        data_104865e8 = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_02eac8fc(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
