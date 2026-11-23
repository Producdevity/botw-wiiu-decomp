#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a150;
extern "C" RuntimeTag data_1048a14c;
extern "C" const RuntimeVTable data_1008ffec;
extern "C" unsigned data_10487144;
extern "C" RuntimeTag data_10487148;
extern "C" const RuntimeVTable data_1008ffdc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008ffcc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008ffbc;

typedef Pointer<&data_1048a150, &data_1048a14c, &data_1008ffec> Type0;
typedef Pointer<&data_10487144, &data_10487148, &data_1008ffdc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008ffcc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008ffbc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02365ddc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
