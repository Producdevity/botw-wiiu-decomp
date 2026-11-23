#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487f94;
extern "C" RuntimeTag data_10487f98;
extern "C" const RuntimeVTable data_10033e08;
extern "C" unsigned data_10487f8c;
extern "C" RuntimeTag data_10487f90;
extern "C" const RuntimeVTable data_10033df8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10033de8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10033dd8;

typedef Pointer<&data_10487f94, &data_10487f98, &data_10033e08> Type0;
typedef Pointer<&data_10487f8c, &data_10487f90, &data_10033df8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10033de8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10033dd8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0216a084(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
