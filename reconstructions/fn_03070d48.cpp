#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104915f4;
extern "C" RuntimeTag data_104915f8;
extern "C" const RuntimeVTable data_1025c8dc;
extern "C" unsigned data_104867c8;
extern "C" RuntimeTag data_1049160c;
extern "C" const RuntimeVTable data_1025c8cc;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_1025c89c;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_1025c88c;

typedef Pointer<&data_104915f4, &data_104915f8, &data_1025c8dc> Type0;
typedef Pointer<&data_104867c8, &data_1049160c, &data_1025c8cc> Type1;
typedef Pointer<&data_10485eec, &data_104868ec, &data_1025c89c> Type2;
typedef Pointer<&data_10485ee8, &data_10486a8c, &data_1025c88c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03070d48(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
