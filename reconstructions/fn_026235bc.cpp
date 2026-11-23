#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c02c;
extern "C" RuntimeTag data_1048c030;
extern "C" const RuntimeVTable data_100f959c;
extern "C" unsigned data_1048b1d4;
extern "C" RuntimeTag data_1048b1d8;
extern "C" const RuntimeVTable data_100f958c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f957c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f956c;

typedef Pointer<&data_1048c02c, &data_1048c030, &data_100f959c> Type0;
typedef Pointer<&data_1048b1d4, &data_1048b1d8, &data_100f958c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f957c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f956c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026235bc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
