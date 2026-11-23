#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b88c;
extern "C" RuntimeTag data_1048b888;
extern "C" const RuntimeVTable data_100dc254;
extern "C" unsigned data_1048b880;
extern "C" RuntimeTag data_1048b884;
extern "C" const RuntimeVTable data_100dc244;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dc234;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dc224;

typedef Pointer<&data_1048b88c, &data_1048b888, &data_100dc254> Type0;
typedef Pointer<&data_1048b880, &data_1048b884, &data_100dc244> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100dc234> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100dc224> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0254b330(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
