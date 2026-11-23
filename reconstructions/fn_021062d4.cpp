#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048787c;
extern "C" RuntimeTag data_10487880;
extern "C" const RuntimeVTable data_100219c0;
extern "C" unsigned data_10487874;
extern "C" RuntimeTag data_10487878;
extern "C" const RuntimeVTable data_10021930;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10021920;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10021910;

typedef Pointer<&data_1048787c, &data_10487880, &data_100219c0> Type0;
typedef Pointer<&data_10487874, &data_10487878, &data_10021930> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10021920> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10021910> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021062d4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
