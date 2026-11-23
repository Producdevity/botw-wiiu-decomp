#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048dd7c;
extern "C" RuntimeTag data_1048dd80;
extern "C" const RuntimeVTable data_10162cf0;
extern "C" unsigned data_1048dd74;
extern "C" RuntimeTag data_1048dd78;
extern "C" const RuntimeVTable data_10162ce0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10162cd0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10162cc0;

typedef Pointer<&data_1048dd7c, &data_1048dd80, &data_10162cf0> Type0;
typedef Pointer<&data_1048dd74, &data_1048dd78, &data_10162ce0> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10162cd0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10162cc0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_029135e4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
