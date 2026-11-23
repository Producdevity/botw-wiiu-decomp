#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048de14;
extern "C" RuntimeTag data_1048de18;
extern "C" const RuntimeVTable data_101644f8;
extern "C" unsigned data_1048cf60;
extern "C" RuntimeTag data_1048cf5c;
extern "C" const RuntimeVTable data_101644e8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101644d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101644c8;

typedef Pointer<&data_1048de14, &data_1048de18, &data_101644f8> Type0;
typedef Pointer<&data_1048cf60, &data_1048cf5c, &data_101644e8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101644d8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101644c8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02917ff8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
