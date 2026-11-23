#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104886bc;
extern "C" RuntimeTag data_104886c0;
extern "C" const RuntimeVTable data_10047f64;
extern "C" unsigned data_10488680;
extern "C" RuntimeTag data_1048867c;
extern "C" const RuntimeVTable data_10047f54;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10047f44;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10047f34;

typedef Pointer<&data_104886bc, &data_104886c0, &data_10047f64> Type0;
typedef Pointer<&data_10488680, &data_1048867c, &data_10047f54> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10047f44> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10047f34> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021d8000(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
