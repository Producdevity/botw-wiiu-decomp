#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488188;
extern "C" RuntimeTag data_1048818c;
extern "C" const RuntimeVTable data_10039134;
extern "C" unsigned data_10488168;
extern "C" RuntimeTag data_1048816c;
extern "C" const RuntimeVTable data_10039124;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100390dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100390cc;

typedef Pointer<&data_10488188, &data_1048818c, &data_10039134> Type0;
typedef Pointer<&data_10488168, &data_1048816c, &data_10039124> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100390dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100390cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02186360(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
