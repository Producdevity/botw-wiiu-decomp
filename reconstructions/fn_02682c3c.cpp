#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c464;
extern "C" RuntimeTag data_1048c468;
extern "C" const RuntimeVTable data_10108a2c;
extern "C" unsigned data_1048b590;
extern "C" RuntimeTag data_1048b594;
extern "C" const RuntimeVTable data_10108a1c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10108a0c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101089fc;

typedef Pointer<&data_1048c464, &data_1048c468, &data_10108a2c> Type0;
typedef Pointer<&data_1048b590, &data_1048b594, &data_10108a1c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10108a0c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101089fc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02682c3c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
