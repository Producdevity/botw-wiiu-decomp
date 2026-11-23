#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048f114;
extern "C" RuntimeTag data_10494238;
extern "C" const RuntimeVTable data_102e0fc0;
extern "C" unsigned data_1048f110;
extern "C" RuntimeTag data_104941d8;
extern "C" const RuntimeVTable data_102e0fb0;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102e0fa0;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102e0f90;

typedef Pointer<&data_1048f114, &data_10494238, &data_102e0fc0> Type0;
typedef Pointer<&data_1048f110, &data_104941d8, &data_102e0fb0> Type1;
typedef Pointer<&data_10486c80, &data_104912b4, &data_102e0fa0> Type2;
typedef Pointer<&data_10486c7c, &data_104912b0, &data_102e0f90> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03551ee0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
