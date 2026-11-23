#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489f0c;
extern "C" RuntimeTag data_10489f10;
extern "C" const RuntimeVTable data_10089178;
extern "C" unsigned data_104880c0;
extern "C" RuntimeTag data_104880c4;
extern "C" const RuntimeVTable data_10089168;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10089158;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10089148;

typedef Pointer<&data_10489f0c, &data_10489f10, &data_10089178> Type0;
typedef Pointer<&data_104880c0, &data_104880c4, &data_10089168> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10089158> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10089148> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0233f9b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
