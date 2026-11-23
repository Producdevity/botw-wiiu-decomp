#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cbb0;
extern "C" RuntimeTag data_1048cbb4;
extern "C" const RuntimeVTable data_10125148;
extern "C" unsigned data_1048cba8;
extern "C" RuntimeTag data_1048cbac;
extern "C" const RuntimeVTable data_10125138;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10125128;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10125118;

typedef Pointer<&data_1048cbb0, &data_1048cbb4, &data_10125148> Type0;
typedef Pointer<&data_1048cba8, &data_1048cbac, &data_10125138> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10125128> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10125118> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02758844(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
