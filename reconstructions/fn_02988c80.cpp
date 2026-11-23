#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048e31c;
extern "C" RuntimeTag data_1048e318;
extern "C" const RuntimeVTable data_10174834;
extern "C" unsigned data_104892c8;
extern "C" RuntimeTag data_1048b1fc;
extern "C" const RuntimeVTable data_101747f4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101747e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1017476c;

typedef Pointer<&data_1048e31c, &data_1048e318, &data_10174834> Type0;
typedef Pointer<&data_104892c8, &data_1048b1fc, &data_101747f4> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101747e4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1017476c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02988c80(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
