#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10490120;
extern "C" RuntimeTag data_104940a4;
extern "C" const RuntimeVTable data_102d38dc;
extern "C" unsigned data_10486d78;
extern "C" RuntimeTag data_10486e2c;
extern "C" const RuntimeVTable data_102d38cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d38bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d38ac;

typedef Pointer<&data_10490120, &data_104940a4, &data_102d38dc> Type0;
typedef Pointer<&data_10486d78, &data_10486e2c, &data_102d38cc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_102d38bc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102d38ac> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0350d424(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
