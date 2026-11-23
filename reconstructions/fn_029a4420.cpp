#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048e3a8;
extern "C" RuntimeTag data_1048e3ac;
extern "C" const RuntimeVTable data_101774f8;
extern "C" unsigned data_1048b61c;
extern "C" RuntimeTag data_1048b618;
extern "C" const RuntimeVTable data_10177490;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10177480;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10177470;

typedef Pointer<&data_1048e3a8, &data_1048e3ac, &data_101774f8> Type0;
typedef Pointer<&data_1048b61c, &data_1048b618, &data_10177490> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10177480> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10177470> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_029a4420(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
