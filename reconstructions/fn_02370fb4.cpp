#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a1f8;
extern "C" RuntimeTag data_1048a1fc;
extern "C" const RuntimeVTable data_10091eac;
extern "C" unsigned data_1048a1f0;
extern "C" RuntimeTag data_1048a1f4;
extern "C" const RuntimeVTable data_10091e9c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10091e8c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10091e7c;

typedef Pointer<&data_1048a1f8, &data_1048a1fc, &data_10091eac> Type0;
typedef Pointer<&data_1048a1f0, &data_1048a1f4, &data_10091e9c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10091e8c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10091e7c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02370fb4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
