#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048df4c;
extern "C" RuntimeTag data_1048df50;
extern "C" const RuntimeVTable data_101686f0;
extern "C" unsigned data_1048cf60;
extern "C" RuntimeTag data_1048cf5c;
extern "C" const RuntimeVTable data_101686e0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101686d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101686c0;

typedef Pointer<&data_1048df4c, &data_1048df50, &data_101686f0> Type0;
typedef Pointer<&data_1048cf60, &data_1048cf5c, &data_101686e0> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101686d0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101686c0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0292c648(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
