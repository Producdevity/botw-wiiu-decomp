#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488edc;
extern "C" RuntimeTag data_10488ee0;
extern "C" const RuntimeVTable data_1005d36c;
extern "C" unsigned data_10488ed4;
extern "C" RuntimeTag data_10488ed8;
extern "C" const RuntimeVTable data_1005d35c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005d34c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005d33c;

typedef Pointer<&data_10488edc, &data_10488ee0, &data_1005d36c> Type0;
typedef Pointer<&data_10488ed4, &data_10488ed8, &data_1005d35c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1005d34c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1005d33c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02232e64(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
