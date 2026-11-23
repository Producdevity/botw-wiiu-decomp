#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bd20;
extern "C" RuntimeTag data_1048bd24;
extern "C" const RuntimeVTable data_100ec088;
extern "C" unsigned data_1048bd18;
extern "C" RuntimeTag data_1048bd1c;
extern "C" const RuntimeVTable data_100ec040;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ec030;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ec020;

typedef Pointer<&data_1048bd20, &data_1048bd24, &data_100ec088> Type0;
typedef Pointer<&data_1048bd18, &data_1048bd1c, &data_100ec040> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100ec030> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ec020> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025b75b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
