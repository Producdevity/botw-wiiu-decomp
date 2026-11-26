#include "botw/runtime_tag_query.h"

extern "C" unsigned data_10487c1c;
extern "C" RuntimeTag data_104913ac;
extern "C" const RuntimeVTable data_1028f880;

inline void* operator new(__typeof__(sizeof(0)), void* where) { return where; }

struct TypeInfo : RuntimeTag {
    TypeInfo() { vtable = &data_1028f880; }
};

static inline const RuntimeTag* getTypeInfo() {
    RuntimeTag& token = data_104913ac;
    if (data_10487c1c == 0) {
        data_10487c1c = 1;
        new (&token) TypeInfo;
    }
    return &token;
}

extern "C" bool fn_031c1834(const void*, const RuntimeTag* other) {
    return other == getTypeInfo();
}
