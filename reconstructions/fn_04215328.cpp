#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486f8c;
extern "C" RuntimeTag data_1049265c;
extern "C" const RuntimeVTable data_10418570;
extern "C" unsigned data_104867c8;
extern "C" RuntimeTag data_1049160c;
extern "C" const RuntimeVTable data_10418560;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_10418550;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_10418540;

typedef Pointer<&data_10486f8c, &data_1049265c, &data_10418570> Type0;
typedef Pointer<&data_104867c8, &data_1049160c, &data_10418560> Type1;
typedef Pointer<&data_10485eec, &data_104868ec, &data_10418550> Type2;
typedef Pointer<&data_10485ee8, &data_10486a8c, &data_10418540> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_04215328(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
