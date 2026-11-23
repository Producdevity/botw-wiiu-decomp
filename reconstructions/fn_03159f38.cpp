#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104901b4;
extern "C" RuntimeTag data_1049267c;
extern "C" const RuntimeVTable data_10287f74;
extern "C" unsigned data_1048b1e4;
extern "C" RuntimeTag data_1048b1e8;
extern "C" const RuntimeVTable data_10287f64;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10287f54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10287f44;

typedef Pointer<&data_104901b4, &data_1049267c, &data_10287f74> Type0;
typedef Pointer<&data_1048b1e4, &data_1048b1e8, &data_10287f64> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10287f54> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10287f44> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03159f38(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
