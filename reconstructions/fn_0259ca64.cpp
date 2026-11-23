#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bc48;
extern "C" RuntimeTag data_1048bc4c;
extern "C" const RuntimeVTable data_100e8c40;
extern "C" unsigned data_1048bc40;
extern "C" RuntimeTag data_1048bc44;
extern "C" const RuntimeVTable data_100e8c30;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e8c20;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e8c10;

typedef Pointer<&data_1048bc48, &data_1048bc4c, &data_100e8c40> Type0;
typedef Pointer<&data_1048bc40, &data_1048bc44, &data_100e8c30> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100e8c20> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100e8c10> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0259ca64(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
