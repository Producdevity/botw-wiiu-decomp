#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488f78;
extern "C" RuntimeTag data_10488f74;
extern "C" const RuntimeVTable data_1005f250;
extern "C" unsigned data_10488f70;
extern "C" RuntimeTag data_10488f6c;
extern "C" const RuntimeVTable data_1005f200;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005f1f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005f1e0;

typedef Pointer<&data_10488f78, &data_10488f74, &data_1005f250> Type0;
typedef Pointer<&data_10488f70, &data_10488f6c, &data_1005f200> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1005f1f0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1005f1e0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0223e3b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
