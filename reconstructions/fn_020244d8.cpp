#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104868e4;
extern "C" RuntimeTag data_104868e8;
extern "C" const RuntimeVTable data_10004cc0;
extern "C" unsigned data_10485ce0;
extern "C" RuntimeTag data_10485ce4;
extern "C" const RuntimeVTable data_10004cb0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10004ca0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_10004c90;

typedef Pointer<&data_104868e4, &data_104868e8, &data_10004cc0> Type0;
typedef Pointer<&data_10485ce0, &data_10485ce4, &data_10004cb0> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_10004ca0> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_10004c90> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020244d8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
