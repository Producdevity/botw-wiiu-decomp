#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488060;
extern "C" RuntimeTag data_10488064;
extern "C" const RuntimeVTable data_100356ec;
extern "C" unsigned data_10487f8c;
extern "C" RuntimeTag data_10487f90;
extern "C" const RuntimeVTable data_100356dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100356cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100356bc;

typedef Pointer<&data_10488060, &data_10488064, &data_100356ec> Type0;
typedef Pointer<&data_10487f8c, &data_10487f90, &data_100356dc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100356cc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100356bc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02172480(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
