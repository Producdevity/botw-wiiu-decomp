#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a3cc;
extern "C" RuntimeTag data_1048a3d0;
extern "C" const RuntimeVTable data_10097b40;
extern "C" unsigned data_10489024;
extern "C" RuntimeTag data_10489028;
extern "C" const RuntimeVTable data_10097ae0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10097aa8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10097a98;

typedef Pointer<&data_1048a3cc, &data_1048a3d0, &data_10097b40> Type0;
typedef Pointer<&data_10489024, &data_10489028, &data_10097ae0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10097aa8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10097a98> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02395a0c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
