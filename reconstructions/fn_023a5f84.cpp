#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a4e4;
extern "C" RuntimeTag data_1048a4e8;
extern "C" const RuntimeVTable data_1009b1dc;
extern "C" unsigned data_1048a4cc;
extern "C" RuntimeTag data_1048a4d0;
extern "C" const RuntimeVTable data_1009b1cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009b1bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009b1ac;

typedef Pointer<&data_1048a4e4, &data_1048a4e8, &data_1009b1dc> Type0;
typedef Pointer<&data_1048a4cc, &data_1048a4d0, &data_1009b1cc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1009b1bc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1009b1ac> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_023a5f84(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
