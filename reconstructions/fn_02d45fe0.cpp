#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10490214;
extern "C" RuntimeTag data_10490518;
extern "C" const RuntimeVTable data_101e3f38;
extern "C" unsigned data_10486254;
extern "C" RuntimeTag data_10486510;
extern "C" const RuntimeVTable data_101e3f28;
extern "C" unsigned data_1048624c;
extern "C" RuntimeTag data_104864ac;
extern "C" const RuntimeVTable data_101e3f18;
extern "C" unsigned data_1048623c;
extern "C" RuntimeTag data_104864a8;
extern "C" const RuntimeVTable data_101e3ed0;

typedef Pointer<&data_10490214, &data_10490518, &data_101e3f38> Type0;
typedef Pointer<&data_10486254, &data_10486510, &data_101e3f28> Type1;
typedef Pointer<&data_1048624c, &data_104864ac, &data_101e3f18> Type2;
typedef Pointer<&data_1048623c, &data_104864a8, &data_101e3ed0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02d45fe0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
