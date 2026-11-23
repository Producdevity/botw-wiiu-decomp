#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048678c;
extern "C" RuntimeTag data_10486790;
extern "C" const RuntimeVTable data_100bee34;
extern "C" unsigned data_10485ce0;
extern "C" RuntimeTag data_10485ce4;
extern "C" const RuntimeVTable data_100bee14;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_100bede4;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_100bedd4;

typedef Pointer<&data_1048678c, &data_10486790, &data_100bee34> Type0;
typedef Pointer<&data_10485ce0, &data_10485ce4, &data_100bee14> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_100bede4> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_100bedd4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02474d2c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
