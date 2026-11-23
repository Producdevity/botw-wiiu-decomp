#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488370;
extern "C" RuntimeTag data_10488374;
extern "C" const RuntimeVTable data_1003dcfc;
extern "C" unsigned data_10487f30;
extern "C" RuntimeTag data_10487f34;
extern "C" const RuntimeVTable data_1003dcec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003dcdc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003dccc;

typedef Pointer<&data_10488370, &data_10488374, &data_1003dcfc> Type0;
typedef Pointer<&data_10487f30, &data_10487f34, &data_1003dcec> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003dcdc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003dccc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021a3d8c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
