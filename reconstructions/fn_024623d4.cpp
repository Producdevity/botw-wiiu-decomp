#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048afb4;
extern "C" RuntimeTag data_1048afb0;
extern "C" const RuntimeVTable data_100bc074;
extern "C" unsigned data_1048afa8;
extern "C" RuntimeTag data_1048afac;
extern "C" const RuntimeVTable data_100bc064;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bc054;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bc044;

typedef Pointer<&data_1048afb4, &data_1048afb0, &data_100bc074> Type0;
typedef Pointer<&data_1048afa8, &data_1048afac, &data_100bc064> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100bc054> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100bc044> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024623d4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
