#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fc8c;
extern "C" RuntimeTag data_104905f0;
extern "C" const RuntimeVTable data_101ba410;
extern "C" unsigned data_1048fbdc;
extern "C" RuntimeTag data_10490534;
extern "C" const RuntimeVTable data_101ba400;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101ba3f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101ba3e0;

typedef Pointer<&data_1048fc8c, &data_104905f0, &data_101ba410> Type0;
typedef Pointer<&data_1048fbdc, &data_10490534, &data_101ba400> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_101ba3f0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101ba3e0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02bd59c4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
