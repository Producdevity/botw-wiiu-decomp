#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048aa6c;
extern "C" RuntimeTag data_1048aa70;
extern "C" const RuntimeVTable data_100ac550;
extern "C" unsigned data_10489698;
extern "C" RuntimeTag data_1048969c;
extern "C" const RuntimeVTable data_100ac540;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ac530;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ac520;

typedef Pointer<&data_1048aa6c, &data_1048aa70, &data_100ac550> Type0;
typedef Pointer<&data_10489698, &data_1048969c, &data_100ac540> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100ac530> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ac520> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0240d678(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
