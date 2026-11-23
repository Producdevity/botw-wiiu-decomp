#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fcd0;
extern "C" RuntimeTag data_1049061c;
extern "C" const RuntimeVTable data_101bbaf0;
extern "C" unsigned data_1048fbdc;
extern "C" RuntimeTag data_10490534;
extern "C" const RuntimeVTable data_101bbae0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101bbad0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101bbac0;

typedef Pointer<&data_1048fcd0, &data_1049061c, &data_101bbaf0> Type0;
typedef Pointer<&data_1048fbdc, &data_10490534, &data_101bbae0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_101bbad0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101bbac0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02beae24(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
