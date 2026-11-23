#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048be5c;
extern "C" RuntimeTag data_1048be60;
extern "C" const RuntimeVTable data_100f29cc;
extern "C" unsigned data_1048b6fc;
extern "C" RuntimeTag data_1048b700;
extern "C" const RuntimeVTable data_100f29bc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f29ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f299c;

typedef Pointer<&data_1048be5c, &data_1048be60, &data_100f29cc> Type0;
typedef Pointer<&data_1048b6fc, &data_1048b700, &data_100f29bc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f29ac> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f299c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025f64a8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
