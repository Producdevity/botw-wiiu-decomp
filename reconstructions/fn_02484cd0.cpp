#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b0bc;
extern "C" RuntimeTag data_1048b0c0;
extern "C" const RuntimeVTable data_100c1ab0;
extern "C" unsigned data_1048643c;
extern "C" RuntimeTag data_104864b0;
extern "C" const RuntimeVTable data_100c1aa0;
extern "C" unsigned data_1048624c;
extern "C" RuntimeTag data_104864ac;
extern "C" const RuntimeVTable data_100c1a80;
extern "C" unsigned data_1048623c;
extern "C" RuntimeTag data_104864a8;
extern "C" const RuntimeVTable data_100c1a60;

typedef Pointer<&data_1048b0bc, &data_1048b0c0, &data_100c1ab0> Type0;
typedef Pointer<&data_1048643c, &data_104864b0, &data_100c1aa0> Type1;
typedef Pointer<&data_1048624c, &data_104864ac, &data_100c1a80> Type2;
typedef Pointer<&data_1048623c, &data_104864a8, &data_100c1a60> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02484cd0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
