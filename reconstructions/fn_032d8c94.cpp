#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104901c4;
extern "C" RuntimeTag data_10492d2c;
extern "C" const RuntimeVTable data_102aa110;
extern "C" unsigned data_104901c0;
extern "C" RuntimeTag data_10492d28;
extern "C" const RuntimeVTable data_102aa100;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102aa0f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102aa0e0;

typedef Pointer<&data_104901c4, &data_10492d2c, &data_102aa110> Type0;
typedef Pointer<&data_104901c0, &data_10492d28, &data_102aa100> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_102aa0f0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102aa0e0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_032d8c94(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
