#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048871c;
extern "C" RuntimeTag data_10488720;
extern "C" const RuntimeVTable data_10049428;
extern "C" unsigned data_10486d78;
extern "C" RuntimeTag data_10486e2c;
extern "C" const RuntimeVTable data_10049418;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10049408;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100493f8;

typedef Pointer<&data_1048871c, &data_10488720, &data_10049428> Type0;
typedef Pointer<&data_10486d78, &data_10486e2c, &data_10049418> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10049408> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100493f8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021dd070(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
