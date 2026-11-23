#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bbe8;
extern "C" RuntimeTag data_1048bbec;
extern "C" const RuntimeVTable data_100e6f6c;
extern "C" unsigned data_1048b6fc;
extern "C" RuntimeTag data_1048b700;
extern "C" const RuntimeVTable data_100e6f5c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e6f4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e6f3c;

typedef Pointer<&data_1048bbe8, &data_1048bbec, &data_100e6f6c> Type0;
typedef Pointer<&data_1048b6fc, &data_1048b700, &data_100e6f5c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100e6f4c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100e6f3c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0258c878(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
