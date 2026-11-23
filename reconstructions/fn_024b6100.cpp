#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486440;
extern "C" RuntimeTag data_104864a4;
extern "C" const RuntimeVTable data_100c4c58;
extern "C" unsigned data_10486348;
extern "C" RuntimeTag data_104864bc;
extern "C" const RuntimeVTable data_100c4c08;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_100c4bf8;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_100c4aa0;

typedef Pointer<&data_10486440, &data_104864a4, &data_100c4c58> Type0;
typedef Pointer<&data_10486348, &data_104864bc, &data_100c4c08> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_100c4bf8> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_100c4aa0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024b6100(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
