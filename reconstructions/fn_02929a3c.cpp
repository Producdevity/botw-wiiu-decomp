#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048df24;
extern "C" RuntimeTag data_1048df28;
extern "C" const RuntimeVTable data_10167d98;
extern "C" unsigned data_1048b3b8;
extern "C" RuntimeTag data_1048b3bc;
extern "C" const RuntimeVTable data_10167d88;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10167d78;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10167d68;

typedef Pointer<&data_1048df24, &data_1048df28, &data_10167d98> Type0;
typedef Pointer<&data_1048b3b8, &data_1048b3bc, &data_10167d88> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10167d78> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10167d68> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02929a3c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
