#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048baa8;
extern "C" RuntimeTag data_1048baac;
extern "C" const RuntimeVTable data_100e4000;
extern "C" unsigned data_1048b8dc;
extern "C" RuntimeTag data_1048b8d8;
extern "C" const RuntimeVTable data_100e3eb0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e3ea0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e3e90;

typedef Pointer<&data_1048baa8, &data_1048baac, &data_100e4000> Type0;
typedef Pointer<&data_1048b8dc, &data_1048b8d8, &data_100e3eb0> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100e3ea0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100e3e90> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0257e9ac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
