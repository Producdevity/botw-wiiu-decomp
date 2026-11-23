#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a42c;
extern "C" RuntimeTag data_1048a430;
extern "C" const RuntimeVTable data_10098dc8;
extern "C" unsigned data_1048a41c;
extern "C" RuntimeTag data_1048a420;
extern "C" const RuntimeVTable data_10098d88;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10098d68;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10098d58;

typedef Pointer<&data_1048a42c, &data_1048a430, &data_10098dc8> Type0;
typedef Pointer<&data_1048a41c, &data_1048a420, &data_10098d88> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10098d68> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10098d58> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0239b12c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
