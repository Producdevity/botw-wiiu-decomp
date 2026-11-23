#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104957cc;
extern "C" RuntimeTag data_104957d0;
extern "C" const RuntimeVTable data_102eac18;
extern "C" unsigned data_10486418;
extern "C" RuntimeTag data_1048b628;
extern "C" const RuntimeVTable data_102eac08;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_102eabf8;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_102eabb8;

typedef Pointer<&data_104957cc, &data_104957d0, &data_102eac18> Type0;
typedef Pointer<&data_10486418, &data_1048b628, &data_102eac08> Type1;
typedef Pointer<&data_10486218, &data_1048b624, &data_102eabf8> Type2;
typedef Pointer<&data_10486204, &data_1048b620, &data_102eabb8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_035c9a34(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
