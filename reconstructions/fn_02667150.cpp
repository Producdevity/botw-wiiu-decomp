#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c2c4;
extern "C" RuntimeTag data_1048c2c8;
extern "C" const RuntimeVTable data_101040ec;
extern "C" unsigned data_1048c2bc;
extern "C" RuntimeTag data_1048c2c0;
extern "C" const RuntimeVTable data_101040ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010409c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010408c;

typedef Pointer<&data_1048c2c4, &data_1048c2c8, &data_101040ec> Type0;
typedef Pointer<&data_1048c2bc, &data_1048c2c0, &data_101040ac> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1010409c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1010408c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02667150(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
