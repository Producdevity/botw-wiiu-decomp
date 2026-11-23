#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486b3c;
extern "C" RuntimeTag data_10486b40;
extern "C" const RuntimeVTable data_10006b8c;
extern "C" unsigned data_10485ce0;
extern "C" RuntimeTag data_10485ce4;
extern "C" const RuntimeVTable data_10006b7c;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10006b6c;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_10006b5c;

typedef Pointer<&data_10486b3c, &data_10486b40, &data_10006b8c> Type0;
typedef Pointer<&data_10485ce0, &data_10485ce4, &data_10006b7c> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_10006b6c> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_10006b5c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020368e0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
