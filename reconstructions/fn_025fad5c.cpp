#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048be84;
extern "C" RuntimeTag data_1048be88;
extern "C" const RuntimeVTable data_100f35fc;
extern "C" unsigned data_1048b304;
extern "C" RuntimeTag data_1048b308;
extern "C" const RuntimeVTable data_100f35ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f35dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f35cc;

typedef Pointer<&data_1048be84, &data_1048be88, &data_100f35fc> Type0;
typedef Pointer<&data_1048b304, &data_1048b308, &data_100f35ec> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f35dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f35cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025fad5c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
