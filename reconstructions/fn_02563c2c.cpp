#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048ba08;
extern "C" RuntimeTag data_1048ba0c;
extern "C" const RuntimeVTable data_100e09ec;
extern "C" unsigned data_1048b804;
extern "C" RuntimeTag data_1048b808;
extern "C" const RuntimeVTable data_100e09dc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e09cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e09bc;

typedef Pointer<&data_1048ba08, &data_1048ba0c, &data_100e09ec> Type0;
typedef Pointer<&data_1048b804, &data_1048b808, &data_100e09dc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100e09cc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100e09bc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02563c2c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
