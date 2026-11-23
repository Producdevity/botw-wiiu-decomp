#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cb0c;
extern "C" RuntimeTag data_1048cb10;
extern "C" const RuntimeVTable data_101229dc;
extern "C" unsigned data_1048cb08;
extern "C" RuntimeTag data_1048cb04;
extern "C" const RuntimeVTable data_101229cc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101229bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101229ac;

typedef Pointer<&data_1048cb0c, &data_1048cb10, &data_101229dc> Type0;
typedef Pointer<&data_1048cb08, &data_1048cb04, &data_101229cc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101229bc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101229ac> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02747100(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
