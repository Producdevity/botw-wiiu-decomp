#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b838;
extern "C" RuntimeTag data_1048b83c;
extern "C" const RuntimeVTable data_100db060;
extern "C" unsigned data_104892c8;
extern "C" RuntimeTag data_1048b1fc;
extern "C" const RuntimeVTable data_100db018;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100db008;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100daff8;

typedef Pointer<&data_1048b838, &data_1048b83c, &data_100db060> Type0;
typedef Pointer<&data_104892c8, &data_1048b1fc, &data_100db018> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100db008> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100daff8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02545964(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
