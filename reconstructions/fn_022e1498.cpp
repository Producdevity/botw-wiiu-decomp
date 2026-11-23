#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104896a0;
extern "C" RuntimeTag data_104896a4;
extern "C" const RuntimeVTable data_1007911c;
extern "C" unsigned data_10489698;
extern "C" RuntimeTag data_1048969c;
extern "C" const RuntimeVTable data_1007910c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100790fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100790ec;

typedef Pointer<&data_104896a0, &data_104896a4, &data_1007911c> Type0;
typedef Pointer<&data_10489698, &data_1048969c, &data_1007910c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100790fc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100790ec> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022e1498(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
