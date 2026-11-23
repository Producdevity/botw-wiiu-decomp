#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489c38;
extern "C" RuntimeTag data_10489c3c;
extern "C" const RuntimeVTable data_10080dbc;
extern "C" unsigned data_10489c30;
extern "C" RuntimeTag data_10489c34;
extern "C" const RuntimeVTable data_10080dac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10080d9c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10080d8c;

typedef Pointer<&data_10489c38, &data_10489c3c, &data_10080dbc> Type0;
typedef Pointer<&data_10489c30, &data_10489c34, &data_10080dac> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10080d9c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10080d8c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0230a1b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
