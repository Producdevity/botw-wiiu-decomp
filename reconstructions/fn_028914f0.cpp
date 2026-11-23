#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d930;
extern "C" RuntimeTag data_1048d934;
extern "C" const RuntimeVTable data_1014f8ec;
extern "C" unsigned data_1048c0f4;
extern "C" RuntimeTag data_1048c0f8;
extern "C" const RuntimeVTable data_1014f8dc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014f8cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014f8bc;

typedef Pointer<&data_1048d930, &data_1048d934, &data_1014f8ec> Type0;
typedef Pointer<&data_1048c0f4, &data_1048c0f8, &data_1014f8dc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1014f8cc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1014f8bc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_028914f0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
