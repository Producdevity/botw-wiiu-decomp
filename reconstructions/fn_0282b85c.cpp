#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d410;
extern "C" RuntimeTag data_1048d414;
extern "C" const RuntimeVTable data_1013fe58;
extern "C" unsigned data_1048d3f8;
extern "C" RuntimeTag data_1048d3fc;
extern "C" const RuntimeVTable data_1013fe28;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013fe18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013fe08;

typedef Pointer<&data_1048d410, &data_1048d414, &data_1013fe58> Type0;
typedef Pointer<&data_1048d3f8, &data_1048d3fc, &data_1013fe28> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1013fe18> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1013fe08> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0282b85c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
