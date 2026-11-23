#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d4c4;
extern "C" RuntimeTag data_1048d4c8;
extern "C" const RuntimeVTable data_10141604;
extern "C" unsigned data_10486fb0;
extern "C" RuntimeTag data_1048d4a0;
extern "C" const RuntimeVTable data_101415f4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101415e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101415d4;

typedef Pointer<&data_1048d4c4, &data_1048d4c8, &data_10141604> Type0;
typedef Pointer<&data_10486fb0, &data_1048d4a0, &data_101415f4> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101415e4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101415d4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0283641c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
