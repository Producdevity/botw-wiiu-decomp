#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489080;
extern "C" RuntimeTag data_10489084;
extern "C" const RuntimeVTable data_10062a0c;
extern "C" unsigned data_10489048;
extern "C" RuntimeTag data_1048904c;
extern "C" const RuntimeVTable data_100629fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100629ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100629dc;

typedef Pointer<&data_10489080, &data_10489084, &data_10062a0c> Type0;
typedef Pointer<&data_10489048, &data_1048904c, &data_100629fc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100629ec> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100629dc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022542b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
